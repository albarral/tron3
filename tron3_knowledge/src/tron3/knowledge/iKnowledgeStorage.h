#ifndef _TRON3_KNOWLEDGE_KNOWLEDGE_STORAGE_H
#define _TRON3_KNOWLEDGE_KNOWLEDGE_STORAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Concept.h"

namespace tron3
{
// Interface for classes targeted to store knowledge concepts.
class iKnowledgeStorage
{
public:    
    // add specified concept
    virtual bool addConcept(Concept& oConcept) = 0;
    // search the concept of given area, category and id
    virtual Concept* searchConcept(int area, int categoryId, int conceptId) = 0;
};

}  

#endif
