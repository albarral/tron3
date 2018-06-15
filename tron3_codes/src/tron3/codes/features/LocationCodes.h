#ifndef __TRON3_CODES_FEATURES_LOCATIONCODES_H
#define __TRON3_CODES_FEATURES_LOCATIONCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/location codes
 */
 class LocationCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eLOCATION_OVER,                       
         eLOCATION_UNDER,                       
         eLOCATION_LEFT_TO,                       
         eLOCATION_RIGHT_TO,                    
         eLOCATION_INFRONT,                    
         eLOCATION_BEHIND,                    
         eLOCATION_INSIDE,                    
         eLOCATION_OUTSIDE,                    
         eLOCATION_DIM
    };

 public:                 
     LocationCodes();       
};
}
#endif
