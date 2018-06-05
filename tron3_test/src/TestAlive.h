#ifndef __TRON3_TEST_ALIVE_H
#define __TRON3_TEST_ALIVE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include <log4cxx/logger.h>

// Class used to test tron3_alive llib.
class TestAlive
{
private:
    static log4cxx::LoggerPtr logger;
    std::string modName;          // module name
    
public:
    TestAlive();
    //~TestAlive();

    void makeTest();      
};
#endif
