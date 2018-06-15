#ifndef __TRON3_CODES_FEATURES_SPEEDCODES_H
#define __TRON3_CODES_FEATURES_SPEEDCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/speed codes
 */
 class SpeedCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eSPEED_FAST,                       
         eSPEED_SLOW,                       
         eSPEED_DIM
   };

 public:                 
     SpeedCodes();       
};
}
#endif
