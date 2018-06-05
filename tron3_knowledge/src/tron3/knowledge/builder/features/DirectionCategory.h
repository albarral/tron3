#ifndef __TRON3_KNOWLEDGE_BUILDER_DIRECTION_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_DIRECTION_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for directions
 class DirectionCategory : public Category
{
 public:
    /*! direction codes  */
    enum eCodes
    {
         eDIRECTION_UP,                       
         eDIRECTION_DOWN,                       
         eDIRECTION_LEFT,                       
         eDIRECTION_RIGHT,                    
         eDIRECTION_FRONT,                    
         eDIRECTION_BACK,                    
         eDIRECTION_DIM
    };

 public:    
    DirectionCategory(); 
};
}
#endif
