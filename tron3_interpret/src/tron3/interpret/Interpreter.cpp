/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/interpret/Interpreter.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

using namespace log4cxx;

namespace tron3
{
LoggerPtr Interpreter::logger(Logger::getLogger("tron3.interpret"));

Interpreter::Interpreter()
{          
    oVerbsInterpreter.setArea(ConceptsNature::eNATURE_ACTION); 
    oObjectsInterpreter.setArea(ConceptsNature::eNATURE_OBJECT); 
    oQualifiersInterpreter.setArea(ConceptsNature::eNATURE_FEATURE); 
    oNamesInterpreter.setArea(ConceptsNature::eNATURE_INSTANCE); 
    oPrepositionsInterpreter.setArea(ConceptsNature::eNATURE_NEXUS); 
}

Interpreter::~Interpreter()
{
}

AreaInterpreter* Interpreter::getAreaInterpreter(int area)
{
    switch(area)
    {
        case ConceptsNature::eNATURE_ACTION:
            return &oVerbsInterpreter;
                
        case ConceptsNature::eNATURE_OBJECT:
            return &oObjectsInterpreter;

        case ConceptsNature::eNATURE_FEATURE:
            return &oQualifiersInterpreter;
        
        case ConceptsNature::eNATURE_INSTANCE:
            return &oNamesInterpreter;
        
        case ConceptsNature::eNATURE_NEXUS:
            return &oPrepositionsInterpreter;
        
        default:
            return nullptr;
    }
}

void Interpreter::setKnowledge(Knowledge& oKnowledge)
{
    oVerbsInterpreter.setKnowledge(oKnowledge); 
    oObjectsInterpreter.setKnowledge(oKnowledge);
    oQualifiersInterpreter.setKnowledge(oKnowledge);
    oNamesInterpreter.setKnowledge(oKnowledge);
    oPrepositionsInterpreter.setKnowledge(oKnowledge);
}

void Interpreter::setLanguage(Language& oLanguage)
{
    oVerbsInterpreter.setLanguage(oLanguage);
    oObjectsInterpreter.setLanguage(oLanguage);
    oQualifiersInterpreter.setLanguage(oLanguage);
    oNamesInterpreter.setLanguage(oLanguage);
    oPrepositionsInterpreter.setLanguage(oLanguage);
}

Concept* Interpreter::interpretWord(std::string word)
{
    Concept* pConcepts[5];
    pConcepts[0] = oVerbsInterpreter.interpretWord(word);
    pConcepts[1] = oObjectsInterpreter.interpretWord(word);
    pConcepts[2] = oQualifiersInterpreter.interpretWord(word);
    pConcepts[3] = oNamesInterpreter.interpretWord(word);
    pConcepts[4] = oPrepositionsInterpreter.interpretWord(word);
    
    Concept* pConcept = nullptr;
    for (int i=0; i<5; i++)
        if (pConcepts[i] != nullptr)
        {
            pConcept = pConcepts[i];
            break;
        }
    
    return pConcept;
}

}




