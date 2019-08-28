//(1)创建对象
if (rbMog.Checked)
{
if (fgDetector != null)
{
fgDetector.Dispose();
fgDetector = null;
}
fgDetector = new FGDetector<Bgr>(FORGROUND_DETECTOR_TYPE.FGD);
}
else if (rbFgd.Checked)
{
if (fgDetector != null)
{
fgDetector.Dispose();
fgDetector = null;
}
fgDetector = new FGDetector<Bgr>(FORGROUND_DETECTOR_TYPE.MOG);
}
//背景建模及前景检测
bool stop = false;
while (!stop)
{
Image<Bgr, Byte> image = capture.QueryFrame().Clone();  //当前帧
bool isBgModeling, isFgDetecting;                       //是否正在建模，是否正在前景检测
lock (lockObject)
        {
                stop = !isVideoCapturing;
                isBgModeling = isBackgroundModeling;
                isFgDetecting = isForegroundDetecting;
        }
//得到设置的参数
SettingParam param = (SettingParam)this.Invoke(new GetSettingParamDelegate(GetSettingParam));
if (param.ForegroundDetectType == ForegroundDetectType.Fgd || param.ForegroundDetectType == ForegroundDetectType.Mog)
{
if (fgDetector != null && (isBgModeling || isFgDetecting))
{
//背景建模
fgDetector.Update(image);
backgroundModelFrameCount++;
pbBackgroundModel.Image = fgDetector.BackgroundMask.Bitmap;
//如果达到最大背景建模次数，停止背景建模
if (param.MaxBackgroundModelFrameCount != 0 && backgroundModelFrameCount > param.MaxBackgroundModelFrameCount)
this.Invoke(new NoParamAndReturnDelegate(StopBackgroundModel));
//前景检测
if (isFgDetecting)
{
pbBackgroundModel.Image = fgDetector.ForgroundMask.Bitmap;
}
}
}
//更新视频图像
pbVideo.Image = image.Bitmap;
}
//（3）释放资源
if (fgDetector != null)
{
try
{
fgDetector.Dispose();
}
catch { }
}
