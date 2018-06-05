/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron3/interpret/language/LanguageArea.h"
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

void LanguageArea::addSlang(Slang& oSlang)
{
    mapSlangs.emplace(oSlang.getLetter(), oSlang);
}

Slang* LanguageArea::getSlang(char letter)
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

bool LanguageArea::mapConcept(Concept& oConcept)
{
    // if not proper area, skip
    if (oConcept.getNature() != area)
        return false;
    else
    {
        // get concept initial letter
        char letter = oConcept.getName().front();
        // search proper slang 
        Slang* pSlang = getSlang(letter);
        // if found, add concept to the slang
        if (pSlang != nullptr) 
            pSlang->addWord(oConcept);
        // otherwise
        else
        {
            // create new slang with the concept
            Slang oNewSlang(letter);
            oNewSlang.addWord(oConcept);
            //  and add it to the language area
            addSlang(oNewSlang);
        }
        return true;
    }    
}

bool LanguageArea::mapCategory(Category& oCategory)
{
    // if not proper area, skip
    if (oCategory.getNature() != area)
        return false;
    else
    {
        // walk category concepts, mapping them to the language area
        for (auto& con: oCategory.getMapConcepts()) 
        {
            mapConcept(con.second);           
        }  
        return true;
    }
}

bool LanguageArea::mapKnowledgeArea(KnowledgeArea& oKnowledgeArea)
{
    // if not proper area, skip
    if (oKnowledgeArea.getArea() != area)
        return false;
    else
    {
        // walk knowledge area categories, mapping them to the language area
        for (auto& cat: oKnowledgeArea.getMapCategories()) 
        {
           mapCategory(cat.second);
        }
        return true;
    }    
}

tron::Element* LanguageArea::searchWord(std::string word)
{
    // get slang for word's initial letter 
    Slang* pSlang = getSlang(word.front());
    // if found, search word in slang
    if (pSlang != nullptr)
        return pSlang->searchWord(word);
    // return null if not found
    else
        return nullptr;
}

}




