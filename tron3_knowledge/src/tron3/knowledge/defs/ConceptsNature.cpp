/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
std::string ConceptsNature::getName(int nature)
{
    switch (nature)
    {
        case eNATURE_ACTION:
            return "actions";
            break;
        case eNATURE_OBJECT:
            return "objects";
            break;
        case eNATURE_FEATURE:
            return "features";
            break;
        case eNATURE_INSTANCE:
            return "instances";
            break;
        case eNATURE_NEXUS:
            return "nexes";
            break;
        default: 
            return "invalid";
    }    
}

}




