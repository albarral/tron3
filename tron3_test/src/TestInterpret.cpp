/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

#include "TestInterpret.h"
#include "tron3/knowledge/Concept.h"
#include "tron3/knowledge2/KnowledgeBuilder.h"

using namespace log4cxx;

LoggerPtr TestInterpret::logger(Logger::getLogger("tron3"));

// Constructor 
TestInterpret::TestInterpret()
{    
    modName = "TestInterpret";
 }

void TestInterpret::makeTest()
{
    LOG4CXX_INFO(logger, modName + ": test start \n");

    //interpretWord();    
    interpretPhrase();
            
    LOG4CXX_INFO(logger, modName + ": test end \n");
};


void TestInterpret::prepareInterpreter()
{
    LOG4CXX_INFO(logger, modName + ": prepareInterpreter ...");
    
    // load knowledge
    tron3::KnowledgeBuilder oKnowledgeBuilder;
    oKnowledgeBuilder.load();
    oKnowledgeBuilder.build(oKnowledge);
        
//    LOG4CXX_INFO(logger, oKnowledge.toString());             
    
    // assign knowledge to interpreter
    oInterpreter.setKnowledge(oKnowledge);    
    
//    LOG4CXX_INFO(logger, oInterpreter.getLanguage().toString());   
}

void TestInterpret::interpretWord()
{
    LOG4CXX_INFO(logger, modName + ": interpret word ...\n");

    prepareInterpreter();

    // test interpreter
    std::string word = "right";
    tron3::Concept* pConcept = oInterpreter.interpretWord(word);    
    if (pConcept != nullptr)
    {
        LOG4CXX_INFO(logger, modName + ": concept path = " + oKnowledge.describeConceptPath(*pConcept));
    }           
    else
    {
        LOG4CXX_INFO(logger, modName + ": word unknown " + word);
    }
}

void TestInterpret::interpretPhrase()
{
    LOG4CXX_INFO(logger, modName + ": interpret phrase ...\n");

    prepareInterpreter();

    // test interpreter
    std::string phrase = "move right fast";
    oInterpreter.processPhrase(phrase);
    
    for (tron3::Concept& oConcept : oInterpreter.getPhraseConcepts())        
    {
        LOG4CXX_INFO(logger, modName + ": concept path = " + oKnowledge.describeConceptPath(oConcept));
    }           
}
