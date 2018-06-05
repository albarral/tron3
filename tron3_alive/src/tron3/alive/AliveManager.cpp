/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/alive/AliveManager.h"
#include "tron3/knowledge/builder/KnowledgeBuilder.h"

namespace tron3 
{
log4cxx::LoggerPtr AliveManager::logger(log4cxx::Logger::getLogger("tron3.alive"));

AliveManager::AliveManager() 
{
    blaunched = false;    
}

AliveManager::~AliveManager() 
{
}

bool AliveManager::launch()
{      
    // launch if not launched yet
    if (!blaunched)
    {
        LOG4CXX_INFO(logger, "Launching AliveManager");
        
        float freq = 5.0; // TEMP (get from config)
        
        // load knowledge
        tron3::KnowledgeBuilder oKnowledgeBuilder;
        oKnowledgeBuilder.load();
        oKnowledgeBuilder.build(oKnowledge);

        // init communicator module 
        oCommunicator.init(oKnowledge);
        oCommunicator.setFrequency(freq);    
        
        // launch modules
        oCommunicator.on();    
        
        blaunched = true;    
    }
    // report problems
    else
        LOG4CXX_ERROR(logger, "Can't launch AliveManager: already launched!");        
    
    return blaunched;
}

void AliveManager::end()
{
    LOG4CXX_INFO(logger, "stopping AliveManager ..."); 

    if (oCommunicator.isOn())
    {    
        oCommunicator.off();
        oCommunicator.wait();
    }

    LOG4CXX_INFO(logger, "AliveManager finished");  
}

int AliveManager::getProcessedCommands()
{
    return oCommunicator.getCounter();
}
}
