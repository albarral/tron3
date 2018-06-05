#ifndef __TRON3_KNOWLEDGE_BUILDER_MOVEMENT_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_MOVEMENT_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for movement concepts
 class MovementCategory : public Category
{
 public:
    /*! movement codes  */
    enum eCodes
    {
         eMOVEMENT_MOVE,                       
         eMOVEMENT_RAISE,                       
         eMOVEMENT_LOWER,                       
         eMOVEMENT_ADVANCE,                    
         eMOVEMENT_GOBACK,                    
         eMOVEMENT_STOP,                    
         eMOVEMENT_DIM
    };

 public:    
    MovementCategory(); 
};
}
#endif
