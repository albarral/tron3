#ifndef _TRON3_INTERPRET_INTERPRETER_H
#define _TRON3_INTERPRET_INTERPRETER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/interpret/iLanguageInterpreter.h"
#include "tron3/interpret/AreaInterpreter.h"

namespace tron3
{
// Interpreter class for interpretation of language words into knowledge concepts. Distributed in areas as the knowledge.
class Interpreter : public iLanguageInterpreter
{
private:
    static log4cxx::LoggerPtr logger;
    AreaInterpreter oVerbsInterpreter;        // area interpreter for action concepts
    AreaInterpreter oObjectsInterpreter;      // area interpreter for object concepts
    AreaInterpreter oQualifiersInterpreter;   // area interpreter for feature concepts
    AreaInterpreter oNamesInterpreter;        // area interpreter for instance concepts
    AreaInterpreter oPrepositionsInterpreter;     // area interpreter for nexus concepts

public:
    Interpreter();
    ~Interpreter ();
    
    AreaInterpreter* getAreaInterpreter(int area);
    
    // set access to given knowledge
    void setKnowledge(Knowledge& oKnowledge) override;
    // set access to given language
    void setLanguage(Language& oLanguage) override;
    // interpret the given word returning its associated concept
    Concept* interpretWord(std::string word) override;    
};

}  

#endif
