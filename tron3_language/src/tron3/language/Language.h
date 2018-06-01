#ifndef _TRON3_LANGUAGE_LANGUAGE_H
#define _TRON3_LANGUAGE_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/iKnowledgeMapper.h"
#include "tron3/knowledge/Knowledge.h"
#include "tron3/language/LanguageArea.h"

namespace tron3
{
// The language holds a set of language areas, each holding all word slangs of a given knowledge nature.
class Language : public iKnowledgeMapper
{
private:
    std::map<int, LanguageArea> mapAreas;

public:
    Language();
    ~Language ();
    
    std::map<int, LanguageArea>& getMapAreas() {return mapAreas;};   
    void clear();
    LanguageArea* getLanguageArea(int area);
    
    std::string toString();    

    // map the given knowledge concept
    bool mapConcept(Concept& oConcept) override;    
    // map the given knowledge category (group of concepts)
    bool mapCategory(Category& oCategory) override;
    // map the given knowledge area (group of categories)
    bool mapKnowledgeArea(KnowledgeArea& oKnowledgeArea) override;    
    // map the given knowledge (set of knowledge areas)
    bool mapKnowledge(Knowledge& oKnowledge);
};

}  

#endif
