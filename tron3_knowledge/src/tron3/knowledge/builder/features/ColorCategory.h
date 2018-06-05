#ifndef __TRON3_KNOWLEDGE_BUILDER_COLOR_CATEGORY_H
#define __TRON3_KNOWLEDGE_BUILDER_COLOR_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for colors
 class ColorCategory : public Category
{
 public:
    /*! color codes  */
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
    ColorCategory(); 
};
}
#endif
