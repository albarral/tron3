/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "log4cxx/ndc.h"

#include "tron3/alive/modules/Communicator.h"

namespace tron3
{    
log4cxx::LoggerPtr Communicator::logger(log4cxx::Logger::getLogger("tron3.alive"));

Communicator::Communicator() 
{
    modName = "Communicator";
    benabled = false;    
    pKnowledge = 0;
}
  
void Communicator::init(Knowledge& oKnowledge)
{
    pKnowledge = &oKnowledge; 
    benabled = true;    
    LOG4CXX_INFO(logger, modName + " initialized");             
}

void Communicator::first()
{    
    log4cxx::NDC::push(modName);   	
    
    // start (in no state)
    if (benabled)
    {
        LOG4CXX_INFO(logger, "started");  
 
        // assign knowledge to interpreter
        oInterpreter.setKnowledge(*pKnowledge);    
        counter = 0;
    }
    // if not initialized -> OFF
    else
    {
        LOG4CXX_WARN(logger, "NOT initialized Going off ... ");  
        tron::Module3::off();        
    }
}

void Communicator::loop()
{   
    // ask for entry
    oConsole.write("what?");
    // wait for entry and interpret it
    if (oConsole.checkInput())
    {
        oInterpreter.processPhrase(oConsole.getInput());
        
        LOG4CXX_INFO(logger, "interpreted ...");
        for (tron3::Concept& oConcept : oInterpreter.getPhraseConcepts())        
        {
            LOG4CXX_INFO(logger, "concept " + pKnowledge->describeConceptPath(oConcept));
        }           
        counter++;
    }
}


//void Communicator::showState()
//{
//    switch (getState())
//    {
//        case eSTATE_SEARCH:
//            LOG4CXX_INFO(logger, ">> search");
//            break;
//        case eSTATE_TRACK:
//            LOG4CXX_INFO(logger, ">> track");
//            break;
//        case eSTATE_LOST:
//            LOG4CXX_INFO(logger, ">> lost");
//            break;
//    }   // end switch    
//}        
}