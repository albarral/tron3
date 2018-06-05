#ifndef __TRON3_KNOWLEDGE_BUILDER_LOCATION_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_LOCATION_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for locations
 class LocationCategory : public Category
{
 public:
    /*! location codes  */
    enum eCodes
    {
         eLOCATION_OVER,                       
         eLOCATION_UNDER,                       
         eLOCATION_LEFT_TO,                       
         eLOCATION_RIGHT_TO,                    
         eLOCATION_INFRONT,                    
         eLOCATION_BEHIND,                    
         eLOCATION_INSIDE,                    
         eLOCATION_OUTSIDE,                    
         eLOCATION_DIM
    };

 public:    
    LocationCategory(); 
};
}
#endif
