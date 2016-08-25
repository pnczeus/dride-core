//
// Created by Yossi Neiman on 25/08/2016.
//

#include <iostream>
#include <opencv2/opencv.hpp>



using namespace cv;
using namespace std;

int main(  )
{
    //TODO Add piCamera class here instead.
    VideoCapture cap("../training/1459726144.h264.mp4"); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    namedWindow("edges",1);
    for(;;)
    {
        Mat frame;
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, COLOR_BGR2GRAY);
        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        Canny(edges, edges, 0, 30, 3);
        imshow("edges", edges);
        if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
