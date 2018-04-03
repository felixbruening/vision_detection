//
// Created by Felix Brüning on 03.04.18.
//

#include "detect_cam.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace cv;
using namespace std;

int main(){

    VideoCapture camera;

    Mat frame;

    capture.open(0);

    while(1){
        camera.read(frame);

        imgshow("Test", frame);
    }
}
