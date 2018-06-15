#ifndef __TRON3_CODES_NATURECODES_H
#define __TRON3_CODES_NATURECODES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/CodeMap.h"

namespace tron3
{
/** 
 * Definition of nature codes
 */
 class NatureCodes : public tron::CodeMap
{
 public:     
    enum eNature
    {
        eNATURE_ACTION,
        eNATURE_OBJECT,
        eNATURE_FEATURE,
        eNATURE_INSTANCE,
        eNATURE_NEXUS,
        eNATURE_DIM
    };

 public:                 
     NatureCodes();       
     
     static bool isAction(int nature) {return (nature == eNATURE_ACTION);};
     static bool isObject(int nature) {return (nature == eNATURE_OBJECT);};
     static bool isFeature(int nature) {return (nature == eNATURE_FEATURE);};
     static bool isInstance(int nature) {return (nature == eNATURE_INSTANCE);};
     static bool isNexus(int nature) {return (nature == eNATURE_NEXUS);};
};
}
#endif
