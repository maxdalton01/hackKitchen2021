//
//  main.cpp
//  hackKitchen
//
//  Created by Jack dePenaloza on 5/8/21.
//  Copyright © 2021 Jack dePenaloza. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;


void showImage(int x){
    if (x == 0){
        Mat image_s_p_hot_ = imread("/users/jack/Documents/hackKtichen/hackKitchen/itsRawGordon.jpeg\
", IMREAD_COLOR);
        imshow("Gordon", image_s_p_hot_);
    }else if(x == 1){
        Mat image_s_p_hot_ = imread("/users/jack/Documents/hackKitchen/hackKitchen/wellDone.jpeg", I\
MREAD_COLOR);
        imshow("Gordon", image_s_p_hot_);
    }else if(x == 2){
        Mat image_s_p_hot_ = imread("/users/jack/Documents/hackKitchen/hackKitchen/idiotSandwich.jpe\
g", IMREAD_COLOR);
        imshow("Gordon", image_s_p_hot_);
    }else if(x == 3){
        Mat image_s_p_hot_ = imread("/users/jack/Documents/hackKitchen/hackKitchen/itsBurnt.jpeg", I\
MREAD_COLOR);
        imshow("Gordon", image_s_p_hot_);
    }
    return;
}


int main(int argc, const char * argv[]) {
    showImage(1);
    waitKey(0);
    return 0;
}
