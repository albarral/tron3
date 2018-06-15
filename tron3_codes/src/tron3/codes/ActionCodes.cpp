/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/ActionCodes.h"

namespace tron3
{
ActionCodes::ActionCodes()
{
    addCode(eACTION_MOVEMENT, "movement");
    addCode(eACTION_MANIPULATION, "manipulation");
//    addCode(eACTION_VISION, "vision");
}
}

