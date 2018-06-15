#ifndef __TRON3_CODES_ACTIONCODES_H
#define __TRON3_CODES_ACTIONCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of action codes
 */
 class ActionCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
        eACTION_MOVEMENT, 
        eACTION_MANIPULATION,        
//        eACTION_VISION,        
        eACTION_DIM
    };

 public:                 
     ActionCodes();       
};
}
#endif
