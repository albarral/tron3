/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <unistd.h>

#include "TestAlive.h"
#include "tron3/alive/AliveManager.h"

using namespace log4cxx;

LoggerPtr TestAlive::logger(Logger::getLogger("tron3"));

// Constructor 
TestAlive::TestAlive()
{    
    modName = "TestAlive";
 }

void TestAlive::makeTest()
{
    LOG4CXX_INFO(logger, modName + ": test start \n");

    tron3::AliveManager oAliveManager;
    oAliveManager.launch();
            
    while (oAliveManager.getProcessedCommands() < 5)
    {
        usleep(1000000);    // sleep 1 sec   
    }
    
    oAliveManager.end();

    LOG4CXX_INFO(logger, modName + ": test end \n");
};
