#ifndef __TRON3_CODES_FEATURES_PROXIMITYCODES_H
#define __TRON3_CODES_FEATURES_PROXIMITYCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/proximity codes
 */
 class ProximityCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         ePROXIMITY_HERE,                       
         ePROXIMITY_THERE,                       
         ePROXIMITY_NEAR,                       
         ePROXIMITY_FAR,                    
         ePROXIMITY_AROUND,                    
         ePROXIMITY_AWAY,                    
         ePROXIMITY_TOGETHER,                    
         ePROXIMITY_DIM
    };

 public:                 
     ProximityCodes();       
};
}
#endif
