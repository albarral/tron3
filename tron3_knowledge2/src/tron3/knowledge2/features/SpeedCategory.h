#ifndef __TRON3_KNOWLEDGE2_SPEED_CATEGORY_H
#define __TRON3_KNOWLEDGE2_SPEED_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for speeds
 class SpeedCategory : public Category
{
 public:
    /*! speed codes  */
    enum eCodes
    {
         eSPEED_FAST,                       
         eSPEED_SLOW,                       
         eSPEED_DIM
    };

 public:    
    SpeedCategory(); 
};
}
#endif
