#ifndef __TRON3_ALIVE_COMMUNICATOR_H
#define __TRON3_ALIVE_COMMUNICATOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/interpret/Interpreter.h"
#include "tron3/knowledge/Knowledge.h"
#include "tron/control/module3.h"
#include "tron/tools/Console.h"

namespace tron3
{    
// Module in charge of interpreting communications with user or other robots.
class Communicator : public tron::Module3
{
public:
    // module states
    enum eState
    {
        eSTATE_SEARCH,
        eSTATE_TRACK,
        eSTATE_LOST
    };

private:
    static log4cxx::LoggerPtr logger;
    // logic
    bool benabled;
    Knowledge* pKnowledge;
    Interpreter oInterpreter; 
    tron::Console oConsole;
    int counter;        // interpretations counter

public:
    Communicator();
    //~Communicator();
        
    bool isEnabled() {return benabled;};    
    // initialize module
    void init(Knowledge& oKnowledge);     
    
    int getCounter() {return counter;};

private:
    // first action after thread begins 
    void first() override;
    // loop inside the module thread 
    void loop() override;             
    
    //void showState();    
};

}
#endif
