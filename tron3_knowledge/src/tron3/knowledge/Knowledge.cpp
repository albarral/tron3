/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/knowledge/Knowledge.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
Knowledge::Knowledge()
{          
    // create empty knowledge areas
    KnowledgeArea oKnowledgeArea;
    for (int area=0; area<ConceptsNature::eNATURE_DIM; area++)
    {
        oKnowledgeArea.setArea(area);
        mapAreas.emplace(area, oKnowledgeArea);
    }
}

Knowledge::~Knowledge()
{
    clear();
}

void Knowledge::clear()
{
    mapAreas.clear();
}

KnowledgeArea* Knowledge::getKnowledgeArea(int area)
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

bool Knowledge::addCategory(Category& oCategory)
{          
    // get proper knowledge area (by category nature)
    KnowledgeArea* pKnowledgeArea = getKnowledgeArea(oCategory.getNature());
    // if found, add category
    if (pKnowledgeArea != nullptr)
    {
        pKnowledgeArea->addCategory(oCategory);                
        return true;
    }
    // return false if not found
    else
        return false;
}

bool Knowledge::addConcept(Concept& oConcept)
{
    // get proper knowledge area (by concept nature)
    KnowledgeArea* pKnowledgeArea = getKnowledgeArea(oConcept.getNature());
    // if found, add concept
    if (pKnowledgeArea != nullptr)
        return pKnowledgeArea->addConcept(oConcept);
    // return false if not found
    else
        return false;    
}

Concept* Knowledge::searchConcept(int area, int categoryId, int conceptId)
{
    // get proper knowledge area
    KnowledgeArea* pKnowledgeArea = getKnowledgeArea(area);
    // if found, search concept inside
    if (pKnowledgeArea != nullptr)
        return pKnowledgeArea->searchConcept(area, categoryId, conceptId);
    // return null if not found
    else
        return nullptr;    
}

std::string Knowledge::toString()
{
    std::string text = "Knowledge\n";
    for (auto& x: mapAreas) 
    {
        text += x.second.toString() + "\n";        
    }    
    return text;    
}

}




