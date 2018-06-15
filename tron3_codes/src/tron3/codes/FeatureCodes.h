#ifndef __TRON3_CODES_FEATURECODES_H
#define __TRON3_CODES_FEATURECODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of feature codes
 */
 class FeatureCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
        eFEATURE_AFFIRMATION,             
        eFEATURE_COLOR,             
        eFEATURE_DIRECTION,        
        eFEATURE_LOCATION,         
        eFEATURE_PROXIMITY,             
        eFEATURE_QUANTITY,             
        eFEATURE_SPEED,              
        eFEATURE_DIM
    };

 public:                 
     FeatureCodes();       
};
}
#endif
