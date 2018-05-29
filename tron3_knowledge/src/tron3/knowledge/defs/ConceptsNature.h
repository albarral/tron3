#ifndef __TRON3_KNOWLEDGE_CONCEPTS_NATURE_H
#define __TRON3_KNOWLEDGE_CONCEPTS_NATURE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

namespace tron3
{
/** 
 * Definition of concepts nature 
 */
 class ConceptsNature
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
//    ConceptsNature();       
     
     static bool isAction(int nature) {return (nature == eNATURE_ACTION);};
     static bool isObject(int nature) {return (nature == eNATURE_OBJECT);};
     static bool isFeature(int nature) {return (nature == eNATURE_FEATURE);};
     static bool isInstance(int nature) {return (nature == eNATURE_INSTANCE);};
     static bool isNexus(int nature) {return (nature == eNATURE_NEXUS);};
     
    // get name of nature type
    static std::string getName(int nature);     
};
}
#endif
