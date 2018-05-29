#ifndef _TRON3_KNOWLEDGE_KNOWLEDGE_H
#define _TRON3_KNOWLEDGE_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/KnowledgeArea.h"

namespace tron3
{
// The knowledge holds a set of knowledge areas, each holding all concept categories of a given nature.    
class Knowledge
{
protected:
    KnowledgeArea oActionsArea; 
    KnowledgeArea oObjectsArea; 
    KnowledgeArea oFeaturesArea; 
    KnowledgeArea oInstancesArea; 
    KnowledgeArea oNexesArea; 

public:
    Knowledge();
    ~Knowledge ();
    
    void clear();
    KnowledgeArea* getKnowledgeArea(int area);
    
    std::string toString();    
};

}  

#endif
