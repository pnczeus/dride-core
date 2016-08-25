#include <iostream>
#include <opencv2/opencv.hpp>
#include "../include/json.hpp"
#include <fstream>
#include <string>

using json = nlohmann::json;
using namespace cv;
using namespace std;

int main(  )
{

    // loan json config file
    std::ifstream ifs("config/config.json");
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                         (std::istreambuf_iterator<char>()    ) );

    json config = json::parse(content);


    cout << config["mode"]["debug"] << "\n";


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
        imshow("edges2", frame);
        if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}