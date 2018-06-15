/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/features/AffirmationCodes.h"

namespace tron3
{
AffirmationCodes::AffirmationCodes()
{
    addCode(eAFFIRMATION_YES, "yes");
    addCode(eAFFIRMATION_NO, "no");                         
    addCode(eAFFIRMATION_MAYBE, "maybe");                      
    addCode(eAFFIRMATION_TOO, "too");                   
    addCode(eAFFIRMATION_NEITHER, "neither");                        
    addCode(eAFFIRMATION_OK, "ok");       
}
}

