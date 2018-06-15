/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/FeatureCodes.h"

namespace tron3
{
FeatureCodes::FeatureCodes()
{
    addCode(eFEATURE_AFFIRMATION, "affirmation"); 
    addCode(eFEATURE_COLOR, "color");             
    addCode(eFEATURE_DIRECTION, "direction");       
    addCode(eFEATURE_LOCATION, "location");        
    addCode(eFEATURE_PROXIMITY, "proximity");            
    addCode(eFEATURE_QUANTITY, "quantity");            
    addCode(eFEATURE_SPEED, "speed");              
}
}

