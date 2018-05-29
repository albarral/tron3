#ifndef __TRON3_KNOWLEDGE2_BODY_CATEGORY_H
#define __TRON3_KNOWLEDGE2_BODY_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for body parts
 class BodyCategory : public Category
{
 public:
    /*! body codes  */
    enum eCodes
    {
         eBODY_HEAD,                       
         eBODY_ARM,                       
         eBODY_ARM_L,                       
         eBODY_ARMS,                    
         eBODY_HAND,                    
         eBODY_HAND_L,                    
         eBODY_HANDS,                    
         eBODY_LEG,                    
         eBODY_LEG_L,                    
         eBODY_LEGS,                    
         eBODY_DIM
    };

 public:    
    BodyCategory(); 
};
}
#endif
