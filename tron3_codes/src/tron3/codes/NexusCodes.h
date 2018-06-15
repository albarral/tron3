#ifndef __TRON3_CODES_NEXUSCODES_H
#define __TRON3_CODES_NEXUSCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of nexus codes
 */
 class NexusCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
        eNEXUS_DIM
    };

 public:                 
     NexusCodes();       
};
}
#endif
