//
//  DetectPlates.hpp
//  Computer Vision Labs
//
//  Created by Dias Dosymbaev on 5/22/17.
//  Copyright © 2017 Dias Dosymbaev. All rights reserved.
//

#ifndef DetectPlates_hpp
#define DetectPlates_hpp

#include <stdio.h>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#include "Main.hpp"
#include "PossiblePlate.hpp"
#include "PossibleChar.hpp"
#include "Preprocess.hpp"
#include "DetectChars.hpp"

// global constants ///////////////////////////////////////////////////////////////////////////////
const double PLATE_WIDTH_PADDING_FACTOR = 1.5;
const double PLATE_HEIGHT_PADDING_FACTOR = 1.5;

// function prototypes ////////////////////////////////////////////////////////////////////////////
std::vector<PossiblePlate> detectPlatesInScene(cv::Mat &imgOriginalScene);

std::vector<PossibleChar> findPossibleCharsInScene(cv::Mat &imgThresh);

PossiblePlate extractPlate(cv::Mat &imgOriginal, std::vector<PossibleChar> &vectorOfMatchingChars);


# endif	// DETECT_PLATES_H

