#ifndef __TRON3_KNOWLEDGE2_QUANTITY_CATEGORY_H
#define __TRON3_KNOWLEDGE2_QUANTITY_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Category.h"

namespace tron3
{
// Category for quantities
 class QuantityCategory : public Category
{
 public:
    /*! quantity codes  */
    enum eCodes
    {
         eQUANTITY_MORE,                       
         eQUANTITY_LESS,                       
         eQUANTITY_MUCH,                       
         eQUANTITY_FEW,                    
         eQUANTITY_VERY,                    
         eQUANTITY_ALL,                    
         eQUANTITY_NOTHING,                    
         eQUANTITY_ENOUGH,                    
         eQUANTITY_EQUAL,                    
         eQUANTITY_ALMOST,                    
         eQUANTITY_DIM
    };

 public:    
    QuantityCategory(); 
};
}
#endif
