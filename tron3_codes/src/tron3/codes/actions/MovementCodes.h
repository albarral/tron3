#ifndef __TRON3_CODES_ACTION_MOVEMENTCODES_H
#define __TRON3_CODES_ACTION_MOVEMENTCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of action/movement codes
 */
 class MovementCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eMOVEMENT_MOVE,                       
         eMOVEMENT_RAISE,                       
         eMOVEMENT_LOWER,                       
         eMOVEMENT_ADVANCE,                    
         eMOVEMENT_GOBACK,                    
         eMOVEMENT_STOP,                    
         eMOVEMENT_DIM
    };

 public:                 
     MovementCodes();       
};
}
#endif
