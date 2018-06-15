/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/features/QuantityCodes.h"

namespace tron3
{
QuantityCodes::QuantityCodes()
{
    addCode(eQUANTITY_MORE, "more");

    addCode(eQUANTITY_LESS, "less");                         

    addCode(eQUANTITY_MUCH, "much");                      

    addCode(eQUANTITY_FEW, "few");                   

    addCode(eQUANTITY_VERY, "very");                        

    addCode(eQUANTITY_ALL, "all");       

    addCode(eQUANTITY_NOTHING, "nothing");       

    addCode(eQUANTITY_ENOUGH, "enough");       

    addCode(eQUANTITY_EQUAL, "equal");       
    
    addCode(eQUANTITY_ALMOST, "almost");       
}
}

