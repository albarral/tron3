#ifndef _TRON3_KNOWLEDGE_BUILDER_KNOWLEDGE_BUILDER_H
#define _TRON3_KNOWLEDGE_BUILDER_KNOWLEDGE_BUILDER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

#include "tron3/knowledge/Knowledge.h"

namespace tron3
{
// A knowledge builder is a class that loads all available knowledge in a Knowledge object.
class KnowledgeBuilder
{
private:
    std::vector<Category*> listCategories;
    
public:    
    KnowledgeBuilder();
    ~KnowledgeBuilder();
    
    // load all knowledge into the categories list
    void load();
    // transfer categories to given knowledge
    void build(Knowledge& oKnowledge);    
};

}  

#endif
