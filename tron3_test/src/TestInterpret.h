#ifndef __TRON3_TEST_INTERPRET_H
#define __TRON3_TEST_INTERPRET_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/interpret/Interpreter.h"
#include "tron3/knowledge/Knowledge.h"

// Class used to test tron3_interpret lib.
class TestInterpret
{
private:
    static log4cxx::LoggerPtr logger;
    std::string modName;          // module name
    tron3::Knowledge oKnowledge;
    tron3::Interpreter oInterpreter; 
    
public:
    TestInterpret();
    //~TestInterpret();

    void makeTest();      
    
private:
    void prepareInterpreter();
    void interpretWord();
    void interpretPhrase();
};
#endif
