#ifndef __TRON3_KNOWLEDGE_BUILDER_PROXIMITY_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_PROXIMITY_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for proximity
 class ProximityCategory : public Category
{
 public:
    /*! proximity codes  */
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
    ProximityCategory(); 
};
}
#endif
