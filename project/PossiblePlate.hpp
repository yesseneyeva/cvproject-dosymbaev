//
//  PossiblePlate.hpp
//  Computer Vision Labs
//
//  Created by Dias Dosymbaev on 5/22/17.
//  Copyright © 2017 Dias Dosymbaev. All rights reserved.
//

#ifndef PossiblePlate_hpp
#define PossiblePlate_hpp

#include <stdio.h>

#include <string>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////
class PossiblePlate {
public:
    // member variables ///////////////////////////////////////////////////////////////////////////
    cv::Mat imgPlate;
    cv::Mat imgGrayscale;
    cv::Mat imgThresh;
    
    cv::RotatedRect rrLocationOfPlateInScene;
    
    std::string strChars;
    
    ///////////////////////////////////////////////////////////////////////////////////////////////
    static bool sortDescendingByNumberOfChars(const PossiblePlate &ppLeft, const PossiblePlate &ppRight) {
        return(ppLeft.strChars.length() > ppRight.strChars.length());
    }
    
};

#endif		// end #ifndef POSSIBLE_PLATE_H

