#ifndef __TRON3_ALIVE_MANAGER_H
#define __TRON3_ALIVE_MANAGER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/alive/modules/Communicator.h"
#include "tron3/knowledge/Knowledge.h"

namespace tron3
{
// Manager of tron3 alive modules.
class AliveManager
{
private:
    static log4cxx::LoggerPtr logger;
    bool blaunched;     // indicates when the manager has been launched       
    // modules    
    Knowledge oKnowledge;
    Communicator oCommunicator;    // communicator module (for user interpretation)
    
public:
    AliveManager();
    ~AliveManager();
                   
    bool launch();
    void end();
    
    int getProcessedCommands();
};

}
#endif
