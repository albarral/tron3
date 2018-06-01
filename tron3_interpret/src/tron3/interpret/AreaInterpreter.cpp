/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/interpret/AreaInterpreter.h"
#include "tron3/knowledge/defs/ConceptsNature.h"
#include "tron/util/groups/Element.h"

using namespace log4cxx;

namespace tron3
{
LoggerPtr AreaInterpreter::logger(Logger::getLogger("tron3.interpret"));

AreaInterpreter::AreaInterpreter()
{          
    area = -1;
    pKnowledgeArea = 0;
    pLanguageArea = 0;    
}

AreaInterpreter::~AreaInterpreter()
{
}

void AreaInterpreter::setKnowledge(Knowledge& oKnowledge)
{
    if (area != -1)
        pKnowledgeArea = oKnowledge.getKnowledgeArea(area);
}

void AreaInterpreter::setLanguage(Language& oLanguage)
{
    if (area != -1)
        pLanguageArea = oLanguage.getLanguageArea(area);
}

Concept* AreaInterpreter::interpretWord(std::string word)
{
    // search word in our language area
    tron::Element* pElement = pLanguageArea->searchWord(word);
    // if found, search its associated concept
    if (pElement != nullptr)
        return pKnowledgeArea->searchConcept(area, pElement->getGroup(), pElement->getID());
    // return null if not found
    else
        return nullptr;
}
}




