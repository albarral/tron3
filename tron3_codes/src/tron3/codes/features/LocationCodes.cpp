/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/features/LocationCodes.h"

namespace tron3
{
LocationCodes::LocationCodes()
{
    addCode(eLOCATION_OVER, "over");

    addCode(eLOCATION_UNDER, "under");                         

    addCode(eLOCATION_LEFT_TO, "left to");                      

    addCode(eLOCATION_RIGHT_TO, "right to");                   

    addCode(eLOCATION_INFRONT, "in front of");                        

    addCode(eLOCATION_BEHIND, "behind");       

    addCode(eLOCATION_INSIDE, "inside");       

    addCode(eLOCATION_OUTSIDE, "outside");       
}
}

