#ifndef __TRON3_CODES_OBJECTS_SHAPECODES_H
#define __TRON3_CODES_OBJECTS_SHAPECODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of objects/shape codes
 */
 class ShapeCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eSHAPE_CIRCLE,                       
         eSHAPE_SQUARE,                       
         eSHAPE_ELLIPSE,                       
         eSHAPE_RECTANGLE,                    
         eSHAPE_TRIANGLE,                    
         eSHAPE_LINE,                    
         eSHAPE_POINT,                    
         eSHAPE_DIM
    };

 public:                 
     ShapeCodes();       
};
}
#endif
