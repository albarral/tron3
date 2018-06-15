#ifndef __TRON3_CODES_FEATURES_QUANTITYCODES_H
#define __TRON3_CODES_FEATURES_QUANTITYCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/quantity codes
 */
 class QuantityCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eQUANTITY_MORE,                       
         eQUANTITY_LESS,                       
         eQUANTITY_MUCH,                       
         eQUANTITY_FEW,                    
         eQUANTITY_VERY,                    
         eQUANTITY_ALL,                    
         eQUANTITY_NOTHING,                    
         eQUANTITY_ENOUGH,                    
         eQUANTITY_EQUAL,                    
         eQUANTITY_ALMOST,                    
         eQUANTITY_DIM
    };

 public:                 
     QuantityCodes();       
};
}
#endif
