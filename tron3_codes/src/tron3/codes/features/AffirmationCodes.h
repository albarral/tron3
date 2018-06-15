#ifndef __TRON3_CODES_FEATURES_AFFIRMATIONCODES_H
#define __TRON3_CODES_FEATURES_AFFIRMATIONCODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of features/affirmation codes
 */
 class AffirmationCodes : public tron::CodeMap
{
 public:     
    enum eCodes
    {
         eAFFIRMATION_YES,                       
         eAFFIRMATION_NO,                       
         eAFFIRMATION_MAYBE,                       
         eAFFIRMATION_TOO,                    
         eAFFIRMATION_NEITHER,                    
         eAFFIRMATION_OK,                    
         eAFFIRMATION_DIM
    };

 public:                 
     AffirmationCodes();       
};
}
#endif
