#ifndef __TRON3_CODES_ACTION_MANIPULATIONCODES_H
#define __TRON3_CODES_ACTION_MANIPULATIONCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of action/manipulation codes
 */
 class ManipulationCodes : public tron::CodeMap
{
 public:     
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
     ManipulationCodes();       
};
}
#endif
