//
//  Main.hpp
//  Computer Vision Labs
//
//  Created by Dias Dosymbaev on 5/22/17.
//  Copyright © 2017 Dias Dosymbaev. All rights reserved.
//

#ifndef Main_hpp
#define Main_hpp

#include <stdio.h>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#include "DetectPlates.hpp"
#include "PossiblePlate.hpp"
#include "DetectChars.hpp"

#include<iostream>

#define SHOW_STEPS            // un-comment or comment this line to show steps or not

// global constants ///////////////////////////////////////////////////////////////////////////////
const cv::Scalar SCALAR_BLACK = cv::Scalar(0.0, 0.0, 0.0);
const cv::Scalar SCALAR_WHITE = cv::Scalar(255.0, 255.0, 255.0);
const cv::Scalar SCALAR_YELLOW = cv::Scalar(0.0, 255.0, 255.0);
const cv::Scalar SCALAR_GREEN = cv::Scalar(0.0, 255.0, 0.0);
const cv::Scalar SCALAR_RED = cv::Scalar(0.0, 0.0, 255.0);

// function prototypes ////////////////////////////////////////////////////////////////////////////
int main(void);
void drawRedRectangleAroundPlate(cv::Mat &imgOriginalScene, PossiblePlate &licPlate);
void writeLicensePlateCharsOnImage(cv::Mat &imgOriginalScene, PossiblePlate &licPlate);


# endif	// MAIN

