/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/objects/BodyCodes.h"

namespace tron3
{
BodyCodes::BodyCodes()
{
    addCode(eBODY_HEAD, "head");

    addCode(eBODY_ARM, "arm");                         

    addCode(eBODY_ARM_L, "left arm");                      

    addCode(eBODY_ARMS, "arms");       

    addCode(eBODY_HAND, "hand");                   

    addCode(eBODY_HAND_L, "left hand");                        

    addCode(eBODY_HANDS, "hands");       

    addCode(eBODY_LEG, "leg");       

    addCode(eBODY_LEG_L, "left leg");       
    
    addCode(eBODY_LEGS, "legs");       
}
}

