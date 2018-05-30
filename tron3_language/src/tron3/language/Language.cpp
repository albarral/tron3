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

bool Language::mapConcept(Concept& oConcept)
{
    // get proper language area for concept
    LanguageArea* pLanguageArea = getLanguageArea(oConcept.getNature());
    // if found, map concept
    if (pLanguageArea != nullptr)
        return pLanguageArea->mapConcept(oConcept);
    else
        return false;
}

bool Language::mapCategory(Category& oCategory)
{
    // get proper language area for category
    LanguageArea* pLanguageArea = getLanguageArea(oCategory.getNature());
    // if found, map category
    if (pLanguageArea != nullptr)
        return pLanguageArea->mapCategory(oCategory);
    else
        return false;
}

bool Language::mapKnowledgeArea(KnowledgeArea& oKnowledgeArea)
{
    // get proper language area for knowledge area
    LanguageArea* pLanguageArea = getLanguageArea(oKnowledgeArea.getArea());
    // if found, map knowledge area
    if (pLanguageArea != nullptr)
        return pLanguageArea->mapKnowledgeArea(oKnowledgeArea);
    else
        return false;
}

bool Language::mapKnowledge(Knowledge& oKnowledge)
{
    // for each nature area
    for (int area = 0; area < ConceptsNature::eNATURE_DIM; area++)
    {
        // get the knowledge area
        KnowledgeArea* pKnowledgeArea = oKnowledge.getKnowledgeArea(area);
        // and map it to the language
        if (pKnowledgeArea != nullptr)
            mapKnowledgeArea(*pKnowledgeArea);
    }    
    return true;
}

}




