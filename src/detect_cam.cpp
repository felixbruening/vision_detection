//
// Created by Felix Brüning on 03.04.18.
//

#include "detect_cam.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv){
    const char *cascade_file = "/opt/local/share/opencv/..";
    CvHaarClassifier *cascade = 0;
    CvMemStorage *storage = 0;
    CvSeq *obj;

    /**
     * create cascader for Objects
     */ 
    cascade = (CvHaarClassifier*) cvLoad(cascade_file, 0, 0, 0);
    CvCapture *capture = cvCreateCameraCapture(0);
     //opens camera
    VideoCapture camera(0);

    Mat edges;

    //namedWindow("edges",1);

    if(!camera.isOpened())
        return -1;

    while(1){
        Mat frame;
        camera >> frame;

        cvtColor(frame, edges, CV_BGR2GRAY);

        imshow("Test", edges);

        if(waitKey(30) >= 0) break;
    }
    return 0;
}
