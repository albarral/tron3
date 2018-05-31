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
    letter = ' ';
}

Slang::Slang(char letter)
{          
    this->letter = letter;
}

Slang::~Slang()
{
    clear();
}

void Slang::clear()
{
    mapWords.clear();    
}

bool Slang::addWord(tron::Element& oElement)
{
    // check initial letter restriction
    if (oElement.getName().front() == letter)
    {
        mapWords.emplace(oElement.getName(), oElement);
        return true;
    }
    else
        return false;
}

tron::Element* Slang::searchWord(std::string word)
{
    try 
    {
        return &(mapWords.at(word));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                
}

std::string Slang::toString()
{
    std::string text = "Slang [letter = " + std::string(1, letter) + "]\n";
    for (auto& x: mapWords) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




