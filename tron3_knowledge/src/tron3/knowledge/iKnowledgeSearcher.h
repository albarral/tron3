#ifndef _TRON3_KNOWLEDGE_KNOWLEDGE_SEARCHER_H
#define _TRON3_KNOWLEDGE_KNOWLEDGE_SEARCHER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Concept.h"

namespace tron3
{
// Interface for classes targeted to search knowledge concepts.
class iKnowledgeSearcher
{
public:    
    // search the concept of given category and id
    virtual Concept* searchConcept(int categoryId, int conceptId) = 0;
};

}  

#endif
