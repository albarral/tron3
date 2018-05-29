/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/language/Language.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
Language::Language()
{          
    oVerbsArea.setArea(ConceptsNature::eNATURE_ACTION); 
    oObjectsArea.setArea(ConceptsNature::eNATURE_OBJECT); 
    oQualifiersArea.setArea(ConceptsNature::eNATURE_FEATURE); 
    oNamesArea.setArea(ConceptsNature::eNATURE_INSTANCE); 
    oPrepositionsArea.setArea(ConceptsNature::eNATURE_NEXUS); 
}


Language::~Language()
{
    clear();
}

void Language::clear()
{
    oVerbsArea.clear(); 
    oObjectsArea.clear(); 
    oQualifiersArea.clear(); 
    oNamesArea.clear(); 
    oPrepositionsArea.clear(); 
}

LanguageArea* Language::getLanguageArea(int area)
{
    switch(area)
    {
        case ConceptsNature::eNATURE_ACTION:
            return &oVerbsArea;
                
        case ConceptsNature::eNATURE_OBJECT:
            return &oObjectsArea;

        case ConceptsNature::eNATURE_FEATURE:
            return &oQualifiersArea;
        
        case ConceptsNature::eNATURE_INSTANCE:
            return &oNamesArea;
        
        case ConceptsNature::eNATURE_NEXUS:
            return &oPrepositionsArea;
        
        default:
            return nullptr;
    }
}

std::string Language::toString()
{
    std::string text = "Language\n";
    text += oVerbsArea.toString() + "\n";        
    text += oObjectsArea.toString() + "\n";        
    text += oQualifiersArea.toString() + "\n";        
    text += oNamesArea.toString() + "\n";        
    text += oPrepositionsArea.toString() + "\n";        
    
    return text;    
}

}




