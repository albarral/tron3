/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/language/LanguageArea.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
LanguageArea::LanguageArea()
{          
    area = -1;
}

LanguageArea::~LanguageArea()
{
    clear();
}

void LanguageArea::clear()
{
    mapSlangs.clear();    
}

void LanguageArea::addSlang(std::string letter, Slang& oSlang)
{
    mapSlangs.emplace(letter, oSlang);
}

Slang* LanguageArea::getSlang(std::string letter)
{
    try 
    {
        return &(mapSlangs.at(letter));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                    
}

std::string LanguageArea::toString()
{
    std::string text = "LanguageArea: area=" + ConceptsNature::getName(area) + "\n";
    for (auto& x: mapSlangs) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




