#ifndef __TRON3_CODES_OBJECTCODES_H
#define __TRON3_CODES_OBJECTCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of object codes
 */
 class ObjectCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
        eOBJECT_BODY,             
        eOBJECT_SHAPES,              
//        eOBJECT_TOOLS,              
//        eOBJECT_OFFICE,         
//        eOBJECT_VEHICLES,        
//        eOBJECT_PLAY,        
//        eOBJECT_ANIMALS,        
//        eOBJECT_CONTAINERS,        
        eOBJECT_DIM
    };

 public:                 
     ObjectCodes();       
};
}
#endif
