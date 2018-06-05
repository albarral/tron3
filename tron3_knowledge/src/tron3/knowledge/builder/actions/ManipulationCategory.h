#ifndef __TRON3_KNOWLEDGE_BUILDER_MANIPULATION_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_MANIPULATION_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for manipulation concepts
 class ManipulationCategory : public Category
{
 public:
    /*! manipulation codes  */
    enum eCodes
    {
         eMANIPULATION_TAKE,                       
         eMANIPULATION_PLACE,                       
         eMANIPULATION_PUSH,                       
         eMANIPULATION_PULL,                    
         eMANIPULATION_GRASP,                    
         eMANIPULATION_RELEASE,                    
         eMANIPULATION_WAVE,                    
         eMANIPULATION_DIM
    };

 public:    
    ManipulationCategory(); 
};
}
#endif
