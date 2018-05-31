/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/knowledge/KnowledgeArea.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
KnowledgeArea::KnowledgeArea()
{          
    area = -1;
}

KnowledgeArea::~KnowledgeArea()
{
    clear();
}

void KnowledgeArea::clear()
{
    mapCategories.clear();    
}

void KnowledgeArea::addCategory(Category& oCategory)
{
    mapCategories.emplace(oCategory.getID(), oCategory);
}

Category* KnowledgeArea::getCategory(int categoryId)
{
    try 
    {
        return &(mapCategories.at(categoryId));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                    
}

Concept* KnowledgeArea::searchConcept(int categoryId, int conceptId)
{
    // get proper category
    Category* pCategory = getCategory(categoryId);
    // if found, search concept in category
    if (pCategory != nullptr)
        return pCategory->searchConcept(categoryId, conceptId);
    // return null if not found
    else
        return nullptr;    
}

std::string KnowledgeArea::toString()
{
    std::string text = "KnowledgeArea: area=" + ConceptsNature::getName(area) + "\n";
    for (auto& x: mapCategories) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




