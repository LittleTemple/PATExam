#include<windows.h>
#include "synopsis.h"
#include <io.h>
#include<pthread.h>


/**
*背景建模
 *IplImage 图像信息
 * frame_num_used
 *
*/
void bgModeling(const char * videoFilePath, const int frame_num_used, IplImage ** bgImg, \
    const int size1, const int size2, const int sigma1, const int sigma2) {
    //声明
    IplImage * frame = NULL;
    CvMat * frameMat = NULL;//？？
    CvMat * bgMat = NULL;//背景矩阵
    CvCapture* pCapture = NULL;//读入的视频的一帧的信息
    int frame_no = 0;


    pCapture = cvCaptureFromFile(videoFilePath);//自己选取一段avi视频

    if (!pCapture) {
        printf("Unable to open video file for background modeling!\n");
        return;
    }

    if (*bgImg != NULL) {//非空需先清空*bgImg指向的内存
        cvReleaseImage(bgImg);
    }

    printf("Background Modeling...\n");
    //逐帧读取视频
    while (frame_no < frame_num_used) {//这个frame_num_used是总共的帧数
        frame = cvQueryFrame(pCapture);//如果返回值为NULL,表示已经到了最后一帧了
        frame_no += 1;

        if (frame_no == 1) {//如果是第一帧
            //初始化

            *bgImg = cvCreateImage(cvSize(frame->width, frame->height), frame->depth, frame->nChannels);
            cvCopy(frame, *bgImg);//复制一个新的指针
            frameMat = cvCreateMat(frame->height, frame->width, CV_32FC3);
            bgMat = cvCreateMat((*bgImg)->height, (*bgImg)->width, CV_32FC3);
            cvConvert(frame, frameMat);
            cvConvert(*bgImg, bgMat);
            continue;
        }
        //视频帧IplImage转CvMat
        cvConvert(frame, frameMat);
        //高斯滤波先，以平滑图像
        cvSmooth(frame, frame, CV_GAUSSIAN, size1, size2, sigma1, sigma2);
        //滑动平均更新背景(求平均)
        cvRunningAvg(frameMat, bgMat, (double)1 / frame_num_used);

    }
    cvConvert(bgMat, *bgImg);
    printf("Background Model has been achieved!\n");

    //释放内存
    cvReleaseCapture(&pCapture);
    cvReleaseMat(&frameMat);
    cvReleaseMat(&bgMat);
}

void* warning(void* args){
    Beep(650,200);
}
/**
*基本数据单元
* @rect   该单元所在的位置
* @t      该单元所在的帧
* @img    该单元的像素值
*/
block::block(CvRect rect, int t, IplImage * img) :position(rect), t_sec(t) {
    target = cvCreateImage(cvSize(img->width, img->height), img->depth, img->nChannels);
    cvCopy(img, target);
}

block::~block() {
    cvReleaseImage(&target);
}


/**
*提取前景图像 - 二值图像
*/
void getFgImage(const IplImage * frame, IplImage * fgImg, const IplImage * bgImg, const int threshold) {
    if (frame == NULL || fgImg == NULL || bgImg == NULL) {
        printf("失败:没有任何输入，无法得到前景图像!\n");
        return;
    }

    if (frame->nChannels != 1 || fgImg->nChannels != 1 || bgImg->nChannels != 1) {
        printf("失败:所有的输入图像都应该是灰度图!\nframe channel:%d\nfgImg channel:%d\nbgImg channel:%d\n", \
            frame->nChannels, fgImg->nChannels, bgImg->nChannels);
        return;
    }

    CvMat * frameMat = cvCreateMat(frame->height, frame->width, CV_32FC1);
    CvMat * fgMat = cvCreateMat(fgImg->height, fgImg->width, CV_32FC1);
    CvMat * bgMat = cvCreateMat(bgImg->height, bgImg->width, CV_32FC1);

    cvConvert(frame, frameMat);
    cvConvert(fgImg, fgMat);
    cvConvert(bgImg, bgMat);

    cvSmooth(frameMat, frameMat, CV_GAUSSIAN, 5, 5, 4, 4); //高斯滤波先，以平滑图像

    cvAbsDiff(frameMat, bgMat, fgMat); //当前帧跟背景图相减(求背景差并取绝对值)

    cvThreshold(fgMat, fgImg, threshold, 255, CV_THRESH_BINARY); //二值化前景图(这里采用特定阈值进行二值化)

                                                                 //进行形态学滤波，去掉噪音
    cvErode(fgImg, fgImg, 0, 1);
    cvDilate(fgImg, fgImg, 0, 1);

    //释放矩阵内存
    cvReleaseMat(&frameMat);
    cvReleaseMat(&fgMat);
    cvReleaseMat(&bgMat);
}


/**
*判断两矩形是否重叠
*/
bool isOverlap(const CvRect & a, const CvRect & b) {
    const CvRect * l_rect = &a,
        *r_rect = &b;
    if (a.x > b.x) {
        const CvRect * tmp = l_rect;
        l_rect = r_rect;
        r_rect = tmp;
    }

    if (l_rect->width < r_rect->x - l_rect->x)
        return false;
    else if (l_rect->y <= r_rect->y && l_rect->height >= r_rect->y - l_rect->y)
        return true;
    else if (l_rect->y > r_rect->y && r_rect->height >= l_rect->y - r_rect->y)
        return true;
    else
        return false;
}


/**
*前景位置矩形块合并 - 减少单元数
*/
void mergeRects(list<CvRect> & rects) {
    int x = 0, y = 0, width = 0, height = 0;//临时变量
    for (list<CvRect>::iterator i = rects.begin(); i != rects.end(); ) {
        bool merged = false;//多引入一个变量判断i是否被merge非常有用！
        list<CvRect>::iterator j = i;
        for (j++; j != rects.end(); j++) {
            if (isOverlap(*i, *j)) {
                if (i->x < j->x) {
                    x = i->x;
                    width = max(j->x - i->x + j->width, i->width);
                }
                else {
                    x = j->x;
                    width = max(i->x - j->x + i->width, j->width);
                }

                if (i->y < j->y) {
                    y = i->y;
                    height = max(j->y - i->y + j->height, i->height);
                }
                else {
                    y = j->y;
                    height = max(i->y - j->y + i->height, j->height);
                }

                //合并
                j->x = x;
                j->y = y;
                j->width = width;
                j->height = height;

                i = rects.erase(i);//删除被合并项。注意：删除前者（i）更新后者（j）！
                merged = true;
            }
        }
        if (!merged)
            i++;
    }
}


/**
*判断是否属于同一跟踪目标
*/
bool isSameObj(const CvRect & a, const CvRect & b, const float category_factor) {
    const CvRect * l_rect = &a,
        *r_rect = &b;
    if (a.x > b.x) {
        const CvRect * tmp = l_rect;
        l_rect = r_rect;
        r_rect = tmp;
    }

    int area = 0;//记录重叠区域面积
    if (l_rect->width <= r_rect->x - l_rect->x)
        return false;
    else if (l_rect->y <= r_rect->y && l_rect->height > r_rect->y - l_rect->y) {
        area = (l_rect->x + l_rect->width - r_rect->x) * (l_rect->y + l_rect->height - r_rect->y);
        if (area > category_factor * a.width * a.height || area > category_factor * b.width * b.height)
            return true;
        else
            return false;
    }
    else if (l_rect->y >= r_rect->y && r_rect->height > l_rect->y - r_rect->y) {
        area = (l_rect->x + l_rect->width - r_rect->x) * (r_rect->y + r_rect->height - l_rect->y);
        if (area > category_factor * a.width * a.height || area > category_factor * b.width * b.height)
            return true;
        else
            return false;
    }
    else
        return false;
}


/**
*前景跟踪并建立结构存储相关动作信息
*/
void buildTrackDB(const char * videoFilePath, const IplImage * bgImg, list< list<block *> > & database, int &fps, CvSize &size, \
    const int threshold, const int min_area, const int obj_num, const float extend_factor, \
    const float category_factor, const bool save_mode) {
    if (bgImg == NULL) {
        printf("失败:没有输入背景图像!\n");
        return;
    }

    if (bgImg->nChannels != 1) {
        printf("失败:背景图像应该是灰度图!\n");
        return;
    }

    if (!database.empty()) {
        printf("失败:数据结构不为空，无法建立!\n");
        return;
    }

    if (extend_factor < 0 || extend_factor > 1 || category_factor < 0 || category_factor > 1) {
        printf("Fail: Invalid use of params!\n0 <= extend_factor <= 1\n0 <= category_factor <= 1\n");
        return;
    }

    CvCapture * capture = cvCaptureFromFile(videoFilePath);
    if (!capture) {
        printf("失败:无法打开视频!\n");
        return;
    }
    fps = (int)cvGetCaptureProperty(capture, CV_CAP_PROP_FPS);
    int	frame_count = (int)cvGetCaptureProperty(capture, CV_CAP_PROP_FRAME_COUNT),
        frame_id = 0;
    size = cvSize((int)cvGetCaptureProperty(capture, CV_CAP_PROP_FRAME_WIDTH),
        (int)cvGetCaptureProperty(capture, CV_CAP_PROP_FRAME_HEIGHT));

    IplImage * frame = NULL,
        *frame_gray = cvCreateImage(size, IPL_DEPTH_8U, 1),
        *fgImg = cvCreateImage(size, IPL_DEPTH_8U, 1);

    //以下变量用于轮廓查找函数
    CvMemStorage * storage = cvCreateMemStorage();
    CvSeq * first_contour = NULL;
    IplImage * tmp = cvCreateImage(size, IPL_DEPTH_8U, 1);
    int find_num = 0,
        extend_w = 0,
        extend_h = 0;
    list<CvRect> rects; //存放找到的前景块位置
    char time[10]; //存放时间
    int m = 0, s = 0; //分、秒

    printf("正在进行单元数据库的建立...\n");


    pthread_t tids[2];
    while (frame = cvQueryFrame(capture)) {

        cvCvtColor(frame, frame_gray, CV_BGR2GRAY); //帧图像彩色转灰度
        getFgImage(frame_gray, fgImg, bgImg, threshold); //帧差法获取前景图像

        cvErode( fgImg,fgImg, NULL,1); //腐蚀
        cvDilate(fgImg,fgImg, NULL,1); //膨胀
        cvCopy(fgImg, tmp);
      //***********搜寻出此帧所有的轮廓***********
        find_num = cvFindContours(tmp, storage, &first_contour, sizeof(CvContour), CV_RETR_CCOMP); //检测前景轮廓

        //printf("%d\n", find_num);																						   /**!!!Be careful with the param below!!!**/
        if (first_contour == NULL || frame == NULL) {
            cvClearMemStorage(storage);
            continue;
        }

        printf("frame:%d\t 轮廓num:%d\n", frame_id, find_num);
        //contour analysis
        int fnum = 0;
        for (CvSeq* c = first_contour; c != NULL; c = c->h_next) {
            int left = 0x7fffffff, right = 0, top = 0x7fffffff, bottom = 0;
            int contourWidth = 0,
                contourHeight = 0;
            for (int j = 0; j < c->total; j++) {
                CvPoint * pt = (CvPoint *)cvGetSeqElem(c, j);
                if (pt->x < left)
                    left = pt->x;
                if (pt->x > right)
                    right = pt->x;
                if (pt->y < top)
                    top = pt->y;
                if (pt->y >bottom)
                    bottom = pt->y;
            }
            contourWidth = right - left + 1;
            contourHeight = bottom - top + 1;
            if (contourWidth * contourHeight < min_area)
                continue;
            extend_w = extend_factor * contourWidth;
            extend_h = extend_factor * contourHeight;
            left = (left >= extend_w ? left - extend_w : 0);
            top = (top >= extend_h ? top - extend_h : 0);
            right = ((right + extend_w) < size.width ? right + extend_w : size.width - 1);
            bottom = ((bottom + extend_h) < size.height ? bottom + extend_h : size.height - 1);
            rects.push_back(cvRect(left, top, right - left + 1, bottom - top + 1));
            fnum++;

        }

        printf("物体个数:%d\n", fnum);
        //减少单元数，若重叠则一起处理
        mergeRects(rects); //merge rects进一步筛选

        CvFont fonts = cvFont(1.5,2);
        stringstream ss;string fstr;
        ss<<fnum;
        ss>>fstr;
        string str="number of person:"+ fstr;
        if(fnum > 40){
            CvFont fonts2 = cvFont(5,4);
            cvPutText(frame,"warning", cvPoint(400,300), &fonts2, cvScalar(0, 0, 255));//在frame中标记时间
            int ret = pthread_create(&tids[1],NULL,warning,NULL);


        }
        cvPutText(frame, str.c_str(), cvPoint(30,30), &fonts, cvScalar(0, 255, 0));//在frame中标记时间



        int counter = 0;

        for (list<CvRect>::iterator iter = rects.begin(); iter != rects.end(); iter++) {
            //cvRectangle(frame, cvPoint(iter->x, iter->y), cvPoint(iter->x + iter->width, iter->y + iter->height),\
                                                cvScalar(0,255,0), 1);//在frame中标示出最后保存的方框区域
            m = (frame_id / fps) / 60;
            s = (frame_id / fps) % 60;
            sprintf(time, "%02d:%02d", m, s);

            CvFont font = cvFont(1,1);  //修改 2019年2月28日17:42:40
            //在前景检测时就将帧数标记上，解决时序性冲突
            cvPutText(frame, time, cvPoint(iter->x + iter->width / 3, iter->y + iter->height / 3), &font, cvScalar(0, 0, 255));//在frame中标记时间

            counter++;
            cvSetImageROI(frame, *iter);
            IplImage * target = cvCreateImage(cvSize((*iter).width, (*iter).height), IPL_DEPTH_8U, 3);
            cvCopy(frame, target);

            bool added = false;//判断通过下面的循环是否将block加入到database
            for (list< list<block *> >::iterator i = database.begin(); i != database.end(); i++) {
                list<block *>::iterator j = i->end();//如果 *i 为空则应该到 database 末端了，循环应已终止
                j--;//找到list<block *>最后一个元素，及该目标的最新跟踪数据
                if (isSameObj(*iter, (*j)->position, category_factor)) {//判断是同一跟踪目标
                    i->push_back(new block(*iter, frame_id / fps, target));
                    added = true;
                    break;
                }
            }

            if (!added)//扫描现有database未发现匹配项则新建跟踪目标链表
                database.push_back(list<block *>(1, new block(*iter, frame_id / fps, target)));



            cvResetImageROI(frame);
            cvReleaseImage(&target);
        }

        cvShowImage("frame", frame);
//        cvShowImage("fgImg", fgImg);
        cvWaitKey(1);

        frame_id += 1;
        rects.clear();
        cvClearMemStorage(storage);

    }
    printf("运动数据库已经建立! Total frame num:%d\tValid frame:%d\n", frame_count, frame_id);

    if (!save_mode) {
        if (_access("./DB", 0) == 0)//判断是否存在文件夹“./DB”, 如果存在，先强制删除（避免原来有记录）
            system("rd /s /q DB");
        system("md DB");//创建文件夹“./DB"
       int i = 0, j = 0;
       char filename[50];
       for (list< list<block *> >::iterator iter1 = database.begin(); iter1 != database.end(); iter1++, i++) {
            j = 0;
            for (list<block *>::iterator iter2 = iter1->begin(); iter2 != iter1->end(); iter2++, j++) {
                sprintf(filename, "./DB/obj_%03d_seq_%04d_px%d_py%d_t%d.jpg", i, j, (*iter2)->position.x, (*iter2)->position.y, (*iter2)->t_sec);
                cvSaveImage(filename, (*iter2)->target);
                printf("File %s saved.\n", filename);
            }
        }
    }

    //释放内存
    cvReleaseMemStorage(&storage);
    cvReleaseImage(&tmp);
    cvReleaseImage(&frame_gray);
}


/**
*融合跟踪数据库，输出视频摘要，同时释放Database内存
*/
void mergeDB(list< list<block *> > & database, const char * videoFilePath, const int fps, const CvSize size, const IplImage * bgImg) {
    if (database.empty()) {
        printf("失败：单元数据库为空,无法进行!\n");
        return;
    }

    if (videoFilePath == NULL) {
        printf("失败:没有检测到视频的输入!\n");
        return;
    }

    CvVideoWriter * writer = cvCreateVideoWriter(videoFilePath, CV_FOURCC('M', 'J', 'P', 'G'), fps, size, 1);
    if (writer == NULL) {
        printf("失败:请检查输出路径，无法进行视频的写入!\n");
        return;
    }

    IplImage * frame = cvCreateImage(size, IPL_DEPTH_8U, 3); //输出帧
    block * tmp = NULL; //临时block指针
    vector<CvRect> rects; //保存每帧被填充的位置
    int frame_id = 0;

    printf("Merging track database...\n");
    while (!database.empty()) {

        cvCopy(bgImg, frame); //每次开始用背景图片刷新输出帧

        for (list< list<block *> >::iterator i = database.begin(); i != database.end();) { //遍历级联链表每个子链表首项
            if (i->empty()) {
                i = database.erase(i);
                continue;
            }

            bool canAdd = true;
            tmp = *(i->begin());

            //*检查是否与已经填充的有重叠 ，否则会造成空间冲突
            for (size_t t = 0; t != rects.size(); t++) {
                if (isOverlap(rects[t], tmp->position)) {
                    canAdd = false;
                    break;
                }
            }

            if (canAdd) { //如果可以加入则将block写入输出帧
                cvSetImageROI(frame, tmp->position);
                cvCopy(tmp->target, frame);
                cvResetImageROI(frame);
                rects.push_back(tmp->position); //将填充图块的位置保存
                delete tmp; //释放tmp指向的block的图像内存
                i->pop_front();
                i++;
            }
            else
                i++;
        }
        cvWriteFrame(writer, frame); //写帧
        rects.clear(); //清空rects
        printf("frame:%d written.\n", frame_id);
        frame_id += 1;
    }
    printf("Database has been merged and written to file.\n");

    //释放内存
    cvReleaseImage(&frame);
    cvReleaseVideoWriter(&writer);
}


/**
*释放Database内存函数 - 辅助
*/
void freeDB(list< list<block *> > & database) {
    for (list< list<block *> >::iterator iter1 = database.begin(); iter1 != database.end(); iter1++)
        for (list<block *>::iterator iter2 = iter1->begin(); iter2 != iter1->end();) {
            delete *iter2;
            iter2 = (*iter1).erase(iter2);
        }
}

int main(int argc,char *argv[])
{
    //初始化
    IplImage *bgImg = NULL;
    IplImage *bgImg_gray = NULL;
    int fps;
    CvSize size;
    list< list<block *> > database;
    //视频路径以及输出路径设置
    if(argc!=3){
        printf("参数输入有误，请重新输入!");
    }
  //  char *video_path = argv[1];
   // char *output_path = argv[2];
    char *video_path = "C:\\Users\\Dell\\Desktop\\street.mp4";
    char *output_path = "C:\\Users\\Dell\\Desktop\\Out.avi";
    //背景建模
    bgModeling(video_path, 50, &bgImg);
    //
    cvNamedWindow("1");
    cvShowImage("1", bgImg);
    cvWaitKey(0);//一定要有
    //转灰度图
    bgImg_gray = cvCreateImage(cvGetSize(bgImg), 8, 1);
    cvCvtColor(bgImg, bgImg_gray, CV_RGB2GRAY);
    //建立并存储rect结构

    buildTrackDB(video_path, bgImg_gray, database, fps, size);
    //生成摘要视频并输出
    mergeDB(database, output_path, fps, size, bgImg);
    //释放数据
    freeDB(database);

    return 0;
}
