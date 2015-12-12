//
//  testImageIO.hpp
//  OpenCVInstallTest
//
//  Created by Ashish Gupta on 12/11/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#ifndef testImageIO_h
#define testImageIO_h

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <iostream>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

void displayCam(){
    // create a video capture object
    cv::VideoCapture vCap(0);
    // check if video capture object has succeeded
    if(!vCap.isOpened()){
        return;
    }
    
    cv::namedWindow("Camera", cv::WINDOW_AUTOSIZE);
    // begin an infinite loop of acquisition of image frames from video capture object, until loop is terminated
    for(;;){
        cv::Mat frame;
        vCap >> frame;
        cv::imshow("Camera", frame);
        if(cv::waitKey(30) >= 0){
            break;
        }
    }
    return;
}




#endif /* testImageIO_h */
