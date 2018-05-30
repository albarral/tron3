#ifndef _TRON3_LANGUAGE_KNOWLEDGE_MAPPER_H
#define _TRON3_LANGUAGE_KNOWLEDGE_MAPPER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Concept.h"
#include "tron3/knowledge/Category.h"
#include "tron3/knowledge/KnowledgeArea.h"

namespace tron3
{
// A knowledge mapper is an interface for language classes willing to map any knowledge concepts.
class iKnowledgeMapper
{
public:    
    // map the given knowledge concept
    virtual bool mapConcept(Concept& oConcept) = 0;
    // map the given knowledge category (group of concepts)
    virtual bool mapCategory(Category& oCategory) = 0;
    // map the given knowledge area (group of categories)
    virtual bool mapKnowledgeArea(KnowledgeArea& oKnowledgeArea) = 0;
};

}  

#endif
