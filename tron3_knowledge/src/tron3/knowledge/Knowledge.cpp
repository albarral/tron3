/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Knowledge.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
Knowledge::Knowledge()
{          
    oActionsArea.setArea(ConceptsNature::eNATURE_ACTION); 
    oObjectsArea.setArea(ConceptsNature::eNATURE_OBJECT); 
    oFeaturesArea.setArea(ConceptsNature::eNATURE_FEATURE); 
    oInstancesArea.setArea(ConceptsNature::eNATURE_INSTANCE); 
    oNexesArea.setArea(ConceptsNature::eNATURE_NEXUS); 
}


Knowledge::~Knowledge()
{
    clear();
}

void Knowledge::clear()
{
    oActionsArea.clear(); 
    oObjectsArea.clear(); 
    oFeaturesArea.clear(); 
    oInstancesArea.clear(); 
    oNexesArea.clear(); 
}

KnowledgeArea* Knowledge::getKnowledgeArea(int area)
{
    switch(area)
    {
        case ConceptsNature::eNATURE_ACTION:
            return &oActionsArea;
                
        case ConceptsNature::eNATURE_OBJECT:
            return &oObjectsArea;

        case ConceptsNature::eNATURE_FEATURE:
            return &oFeaturesArea;
        
        case ConceptsNature::eNATURE_INSTANCE:
            return &oInstancesArea;
        
        case ConceptsNature::eNATURE_NEXUS:
            return &oNexesArea;
        
        default:
            return nullptr;
    }
}

std::string Knowledge::toString()
{
    std::string text = "Knowledge\n";
    text += oActionsArea.toString() + "\n";        
    text += oObjectsArea.toString() + "\n";        
    text += oFeaturesArea.toString() + "\n";        
    text += oInstancesArea.toString() + "\n";        
    text += oNexesArea.toString() + "\n";        
    
    return text;    
}

}




