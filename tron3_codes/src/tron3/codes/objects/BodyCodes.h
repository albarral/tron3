#ifndef __TRON3_CODES_OBJECTS_BODYCODES_H
#define __TRON3_CODES_OBJECTS_BODYCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of objects/body codes
 */
 class BodyCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eBODY_HEAD,                       
         eBODY_ARM,                       
         eBODY_ARM_L,                       
         eBODY_ARMS,                    
         eBODY_HAND,                    
         eBODY_HAND_L,                    
         eBODY_HANDS,                    
         eBODY_LEG,                    
         eBODY_LEG_L,                    
         eBODY_LEGS,                    
         eBODY_DIM
    };

 public:                 
     BodyCodes();       
};
}
#endif
