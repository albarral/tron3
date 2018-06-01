/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestKnowledge.h"
#include "tron3/interpret/Interpreter.h"
#include "tron3/knowledge/Concept.h"
#include "tron3/knowledge/defs/ConceptsNature.h"
#include "tron3/knowledge/defs/ObjectCategories.h"
#include "tron3/knowledge2/KnowledgeBuilder.h"

using namespace log4cxx;

LoggerPtr TestKnowledge::logger(Logger::getLogger("tron3"));

// Constructor 
TestKnowledge::TestKnowledge()
{    
    modName = "TestKnowledge";
 }

void TestKnowledge::makeTest()
{
    LOG4CXX_INFO(logger, modName + ": test start \n");

    loadKnowledge();
        
    // create interpreter
    tron3::Interpreter oInterpreter;   
    oInterpreter.setKnowledge(oKnowledge);
    
    LOG4CXX_INFO(logger, oInterpreter.getLanguage().toString());     

    // test interpreter
    std::string word = "finger";
    tron3::Concept* pConcept = oInterpreter.interpretWord(word);    
    if (pConcept != nullptr)
    {
        LOG4CXX_INFO(logger, modName + ": " + pConcept->toString());
    }           
    else
    {
        LOG4CXX_INFO(logger, modName + ": word unknown " + word);
    }
        
    
    LOG4CXX_INFO(logger, modName + ": test end \n");
};


void TestKnowledge::loadKnowledge()
{
    LOG4CXX_INFO(logger, modName + ": loadKnowledge ...");
    
    tron3::KnowledgeBuilder oKnowledgeBuilder;
    oKnowledgeBuilder.load();
    oKnowledgeBuilder.build(oKnowledge);
    
    // add new concept
    int nature = tron3::ConceptsNature::eNATURE_OBJECT;
    int category = tron3::ObjectCategories::eOBJECT_BODY;
    tron3::Concept oNewConcept(100, "finger");
    oNewConcept.setNature(nature);
    oNewConcept.setGroup(category);
    oKnowledge.addConcept(oNewConcept);
    
//    LOG4CXX_INFO(logger, oKnowledge.toString());             
}


