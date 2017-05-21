//
//  PossibleChar.cpp
//  Computer Vision Labs
//
//  Created by Dias Dosymbaev on 5/22/17.
//  Copyright © 2017 Dias Dosymbaev. All rights reserved.
//

#include "PossibleChar.hpp"

///////////////////////////////////////////////////////////////////////////////////////////////////
PossibleChar::PossibleChar(std::vector<cv::Point> _contour) {
    contour = _contour;
    
    boundingRect = cv::boundingRect(contour);
    
    intCenterX = (boundingRect.x + boundingRect.x + boundingRect.width) / 2;
    intCenterY = (boundingRect.y + boundingRect.y + boundingRect.height) / 2;
    
    dblDiagonalSize = sqrt(pow(boundingRect.width, 2) + pow(boundingRect.height, 2));
    
    dblAspectRatio = (float)boundingRect.width / (float)boundingRect.height;
}

