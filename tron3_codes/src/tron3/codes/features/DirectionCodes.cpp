/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/features/DirectionCodes.h"

namespace tron3
{
DirectionCodes::DirectionCodes()
{
    addCode(eDIRECTION_UP, "up");

    addCode(eDIRECTION_DOWN, "down");                         

    addCode(eDIRECTION_LEFT, "left");                      

    addCode(eDIRECTION_RIGHT, "right");                   

    addCode(eDIRECTION_FRONT, "front");                        

    addCode(eDIRECTION_BACK, "back");       
}
}

