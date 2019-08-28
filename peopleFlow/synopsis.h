#pragma once
#ifndef _SYNOPSIS_H
#define _SYNOPSIS_H


#ifndef _DLL_API
#define _DLL_API _declspec(dllexport)
#else
#define _DLL_API _declspec(dllimport)
#endif

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

#include <cv.h>
#include <highgui.h>
#include <list>
#include <stdio.h>
#include <opencv.hpp>
using namespace cv;
using namespace std;

/**
*功能：	取前N帧平均法做背景建模
*/
void bgModeling(const char * videoFilePath, const int frame_num_used, IplImage ** bgImg, \
    const int size1 = 5, const int size2 = 5, const int sigma1 = 4, const int sigma2 = 4);


/**
*保存团块的基本数据单元
*/
struct block {
    //functions
    block(CvRect rect, int t, IplImage * img); //构造函数
    ~block(); //析构函数

    //variables
    CvRect position; //团块在源图中位置
    int t_sec; //所在帧时间
    IplImage * target; //图像

};

using namespace cv;
/**
*功能：	检测并跟踪运动前景团块block，将blocks保存按级联链表结构存储，可以选择保存数据结果
*/
void buildTrackDB(const char * videoFilePath, const IplImage * bgImg, list< list<block *> > & database, int &fps, CvSize &size, \
    const int threshold = 30, const int min_area = 400, const int obj_num = 3, \
    const float extend_factor = 0.2, const float category_factor = 0.5, const bool save_mode = true);


/**
*功能：	融合跟踪数据库形成视频摘要
*参数：	database		-	级联链表数据的引用（输入）
*		videoFilePath	-	输出摘要视频文件路径 + 文件名（例如“E:/synopsis.avi”）
*/
void mergeDB(list< list<block *> > & database, const char * videoFilePath, const int fps, const CvSize size, const IplImage * bgImg);


/**
*功能： 释放database占据的内存空间
*参数： database	-	级联链表数据的引用
*/
void freeDB(list< list<block *> > & database);


#endif
#pragma once

