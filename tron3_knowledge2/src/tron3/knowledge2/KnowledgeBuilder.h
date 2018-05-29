#ifndef _TRON3_KNOWLEDGE2_KNOWLEDGE_BUILDER_H
#define _TRON3_KNOWLEDGE2_KNOWLEDGE_BUILDER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/Knowledge.h"
#include "tron3/knowledge/KnowledgeArea.h"

namespace tron3
{
// A knowledge builder is a class that loads all available knowledge in a Knowledge object.
class KnowledgeBuilder
{
public:    
    static void build(Knowledge& oKnowledge);
    
private:    
    static void buildArea(KnowledgeArea* pKnowledgeArea);
};

}  

#endif
