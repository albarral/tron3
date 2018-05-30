/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestKnowledge.h"
#include "tron3/knowledge/Knowledge.h"
#include "tron3/knowledge2/KnowledgeBuilder.h"
#include "tron3/language/Language.h"

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
        
    LOG4CXX_INFO(logger, modName + ": test end \n");
};


void TestKnowledge::loadKnowledge()
{
    LOG4CXX_INFO(logger, modName + ": loadKnowledge ...");

    tron3::Knowledge oKnowledge;
    
    tron3::KnowledgeBuilder::build(oKnowledge);
    
    LOG4CXX_INFO(logger, oKnowledge.toString());     
    
    tron3::Language oLanguage;
    oLanguage.mapKnowledge(oKnowledge);
    
    LOG4CXX_INFO(logger, oLanguage.toString());     
}


