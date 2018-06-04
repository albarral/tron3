#ifndef _TRON3_KNOWLEDGE_KNOWLEDGE_H
#define _TRON3_KNOWLEDGE_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/iKnowledgeStorage.h"
#include "tron3/knowledge/Category.h"
#include "tron3/knowledge/KnowledgeArea.h"

namespace tron3
{
// The knowledge holds a set of knowledge areas, each holding all concept categories of a given nature.    
class Knowledge : public iKnowledgeStorage
{
private:
    std::map<int, KnowledgeArea> mapAreas;

public:
    Knowledge();
    ~Knowledge ();
    
    std::map<int, KnowledgeArea>& getMapAreas() {return mapAreas;};   
    void clear();
    KnowledgeArea* getKnowledgeArea(int area);

    // add specified category    
    bool addCategory(Category& oCategory);

    // add specified concept
    bool addConcept(Concept& oConcept) override;
    // search the concept of given area, category and id
    Concept* searchConcept(int area, int categoryId, int conceptId) override;
    // describe path of given concept
    std::string describeConceptPath(Concept& oConcept) override;

    std::string toString();    
};

}  

#endif
