/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/actions/MovementCodes.h"

namespace tron3
{
MovementCodes::MovementCodes()
{
    addCode(eMOVEMENT_MOVE, "move");
    addCode(eMOVEMENT_RAISE, "raise");                         
    addCode(eMOVEMENT_LOWER, "lower");                      
    addCode(eMOVEMENT_ADVANCE, "advance");                   
    addCode(eMOVEMENT_GOBACK, "go back");                        
    addCode(eMOVEMENT_STOP, "stop");       
}
}

