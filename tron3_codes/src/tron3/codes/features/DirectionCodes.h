#ifndef __TRON3_CODES_FEATURES_DIRECTIONCODES_H
#define __TRON3_CODES_FEATURES_DIRECTIONCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/direction codes
 */
 class DirectionCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eDIRECTION_UP,                       
         eDIRECTION_DOWN,                       
         eDIRECTION_LEFT,                       
         eDIRECTION_RIGHT,                    
         eDIRECTION_FRONT,                    
         eDIRECTION_BACK,                    
         eDIRECTION_DIM
    };

 public:                 
     DirectionCodes();       
};
}
#endif
