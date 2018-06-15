#ifndef __TRON3_CODES_FEATURES_COLORCODES_H
#define __TRON3_CODES_FEATURES_COLORCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/color codes
 */
 class ColorCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eCOLOR_RED,                       
         eCOLOR_GREEN,                       
         eCOLOR_BLUE,                       
         eCOLOR_YELLOW,                    
         eCOLOR_ORANGE,                    
         eCOLOR_BROWN,                    
         eCOLOR_BLACK,                    
         eCOLOR_WHITE,                    
         eCOLOR_GREY,                    
         eCOLOR_DIM
    };

 public:                 
     ColorCodes();       
};
}
#endif
