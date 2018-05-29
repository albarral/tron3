/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/language/Slang.h"

namespace tron3
{
Slang::Slang()
{          
    type = tron::Element::eTYPE_GROUP;
}

Slang::Slang(int id, std::string name) : tron::Element(id, name)
{          
    type = tron::Element::eTYPE_GROUP;
}

Slang::~Slang()
{
    clear();
}

void Slang::clear()
{
    mapWords.clear();    
}

void Slang::addWord(tron::Element& oElement)
{
    mapWords.emplace(oElement.getName(), oElement);
}

tron::Element* Slang::getWord(std::string name)
{
    try 
    {
        return &(mapWords.at(name));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                
}

std::string Slang::toString()
{
    std::string text = "Slang [" + tron::Element::toString() + "]\n";
    for (auto& x: mapWords) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




