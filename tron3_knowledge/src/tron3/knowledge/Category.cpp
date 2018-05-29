/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/knowledge/Category.h"

namespace tron3
{
Category::Category()
{          
    type = tron::Element::eTYPE_GROUP;
}

Category::Category(int id, std::string name) : Concept(id, name)
{          
    type = tron::Element::eTYPE_GROUP;
}

Category::~Category()
{
    clear();
}

void Category::clear()
{
    mapConcepts.clear();    
}

void Category::addConcept(Concept& oConcept)
{
    // when adding a concept to a category, transfer the category id & nature to the concept
    oConcept.setGroup(id);
    oConcept.setNature(nature);
    mapConcepts.emplace(oConcept.getID(), oConcept);
}

Concept* Category::getConcept(int conceptId)
{
    try 
    {
        return &(mapConcepts.at(conceptId));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                
}

std::string Category::toString()
{
    std::string text = "Category [" + Concept::toString() + "]\n";
    for (auto& x: mapConcepts) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




