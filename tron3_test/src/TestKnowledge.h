#ifndef __TRON3_TEST_KNOWLEDGE_H
#define __TRON3_TEST_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/knowledge/Knowledge.h"

// Class used to test tron3_knowledge lib.
class TestKnowledge
{
private:
    static log4cxx::LoggerPtr logger;
    std::string modName;          // module name
    tron3::Knowledge oKnowledge;

public:
    TestKnowledge();
    //~TestKnowledge();

    void makeTest();      
    
private:
    void loadKnowledge();
};
#endif
