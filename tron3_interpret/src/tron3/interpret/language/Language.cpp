/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/interpret/language/Language.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
Language::Language()
{          
    // create empty language areas
    LanguageArea oLanguageArea;
    for (int area=0; area<ConceptsNature::eNATURE_DIM; area++)
    {
        oLanguageArea.setArea(area);
        mapAreas.emplace(area, oLanguageArea);
    }
}

Language::~Language()
{
    clear();
}

void Language::clear()
{
    mapAreas.clear();
}

LanguageArea* Language::getLanguageArea(int area)
{
    try 
    {
        return &(mapAreas.at(area));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                    
}

std::string Language::toString()
{
    std::string text = "Language\n";
    for (auto& x: mapAreas) 
    {
        text += x.second.toString() + "\n";        
    }    
    
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
    // for each knowledge area, map it to the language
    for (auto& x: oKnowledge.getMapAreas()) 
    {
        mapKnowledgeArea(x.second);
    }    
    return true;
}

}




