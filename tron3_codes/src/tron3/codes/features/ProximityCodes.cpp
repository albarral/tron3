/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/features/ProximityCodes.h"

namespace tron3
{
ProximityCodes::ProximityCodes()
{
    addCode(ePROXIMITY_HERE, "here");

    addCode(ePROXIMITY_THERE, "there");                         

    addCode(ePROXIMITY_NEAR, "near");                      

    addCode(ePROXIMITY_FAR, "far");                   

    addCode(ePROXIMITY_AROUND, "around");                        

    addCode(ePROXIMITY_AWAY, "away");       

    addCode(ePROXIMITY_TOGETHER, "together");       
}
}

