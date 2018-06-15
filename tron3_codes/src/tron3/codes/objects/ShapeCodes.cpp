/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/objects/ShapeCodes.h"

namespace tron3
{
ShapeCodes::ShapeCodes()
{
    addCode(eSHAPE_CIRCLE, "circle");

    addCode(eSHAPE_SQUARE, "square");                         

    addCode(eSHAPE_ELLIPSE, "ellipse");                      

    addCode(eSHAPE_RECTANGLE, "rectangle");       

    addCode(eSHAPE_TRIANGLE, "triangle");                   

    addCode(eSHAPE_LINE, "line");                        

    addCode(eSHAPE_POINT, "point");       
}
}

