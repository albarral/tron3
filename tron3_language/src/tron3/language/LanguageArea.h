#ifndef _TRON3_LANGUAGE_LANGUAGE_AREA_H
#define _TRON3_LANGUAGE_LANGUAGE_AREA_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>
#include <string>

#include "tron3/language/iKnowledgeMapper.h"
#include "tron3/language/Slang.h"

namespace tron3
{
// A knowledge area holds all concept categories of a given nature.
class LanguageArea : public iKnowledgeMapper
{
private:
    int area;
    std::map<char, Slang> mapSlangs; // map <letter, slang> 

public:
    LanguageArea();
    ~LanguageArea ();

    void setArea(int value) {area = value;};
    int getArea(){return area;};
    
    void clear();
    void addSlang(Slang& oSlang);    
    std::map<char, Slang>& getMapSlangs() {return mapSlangs;};
    
    // get slang for the specified letter, returns null if not found
    Slang* getSlang(char letter);    
    int getNumSlangs() {return mapSlangs.size();};    
        
    std::string toString();    
    
    // map the given knowledge concept
    bool mapConcept(Concept& oConcept) override;    
    // map the given knowledge category (group of concepts)
    bool mapCategory(Category& oCategory) override;
    // map the given knowledge area (group of categories)
    bool mapKnowledgeArea(KnowledgeArea& oKnowledgeArea) override;
};

}  

#endif
