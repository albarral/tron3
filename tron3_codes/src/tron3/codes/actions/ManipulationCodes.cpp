/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/actions/ManipulationCodes.h"

namespace tron3
{
ManipulationCodes::ManipulationCodes()
{ 
    addCode(eMANIPULATION_TAKE, "take");
    addCode(eMANIPULATION_PLACE, "place");                         
    addCode(eMANIPULATION_PUSH, "push");                      
    addCode(eMANIPULATION_PULL, "pull");                   
    addCode(eMANIPULATION_GRASP, "grasp");                        
    addCode(eMANIPULATION_RELEASE, "release");       
    addCode(eMANIPULATION_WAVE, "wave");       
}
}

