#include "opencv2/opencv.hpp"
#include "iostream"
#include "cstdlib"

int main(int argc,char** argv)
{
  cv::VideoCapture cap(0);
  cv::Mat frame;
  
  while(true)
  {
    cap >> frame;
    cv::imshow("BGR",frame);
    if(cv::WaitKey(1) == 27)
    {
      break;
    }
  }
  
  return 0;
}
