#ifndef __TRON3_TEST_CONCEPTS_H
#define __TRON3_TEST_CONCEPTS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

// Class used to test tron3_knowledge lib.
class TestKnowledge
{
private:
    static log4cxx::LoggerPtr logger;
    std::string modName;          // module name

public:
    TestKnowledge();
    //~TestKnowledge();

    void makeTest();      
    
private:
    void loadKnowledge();
};
#endif
