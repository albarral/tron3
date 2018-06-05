/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <cstdlib>  // for getenv

#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>

#include "TestAlive.h"
#include "TestKnowledge.h"
#include "TestInterpret.h"

// obtains user's home path
std::string getHomePath();

log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("tron3"));

enum eTest
{
    eTEST_ALIVE, 
    eTEST_KNOWLEDGE, 
    eTEST_INTERPRETER, 
};

// main program
int main(int argc, char** argv) 
{
    std::string home = getHomePath();
    std::string configFile = home + "/.tron/log4cxx_config_tron3test.xml";
    log4cxx::xml::DOMConfigurator::configure(configFile);    
        
    LOG4CXX_INFO(logger, "\n\nSTART tron3 test\n");
    
    int test = eTEST_ALIVE;       // test selection

    switch (test)
    {
        case eTEST_ALIVE:
        {
            // test alive lib
            TestAlive oTestAlive;
            oTestAlive.makeTest();
            break;
        }
        case eTEST_KNOWLEDGE:
        {
            // test knowledge lib
            TestKnowledge oTestKnowledge;
            oTestKnowledge.makeTest();
            break;
        }
        case eTEST_INTERPRETER:
        {
            // test interpret lib
            TestInterpret oTestInterpret;
            oTestInterpret.makeTest();
            break;
        }
    }
           
    LOG4CXX_INFO(logger, "tron3 test FINISHED\n");
    
    return 0;
}

std::string getHomePath()
{    
    // obtain value of HOME environment variable
    char* pVar = getenv("HOME");    
    if (pVar!=NULL)
    {
        // transform it in a string
        std::string home(pVar);
        return home;
    }
    else
        return "";
}
