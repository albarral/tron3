#ifndef _TRON3_INTERPRET_INTERPRETER_H
#define _TRON3_INTERPRET_INTERPRETER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>
#include <vector>
#include <log4cxx/logger.h>

#include "tron3/interpret/iLanguageInterpreter.h"
#include "tron3/interpret/AreaInterpreter.h"
#include "tron3/language/Language.h"

namespace tron3
{
// Interpreter class for interpretation of language words into knowledge concepts. Distributed in areas as the knowledge.
class Interpreter : public iLanguageInterpreter
{
private:
    static log4cxx::LoggerPtr logger;
    Language oLanguage;
    std::map<int, AreaInterpreter> mapAreaInterpreters;    // area interpreters 
    std::vector<Concept> listPhraseConcepts;                     // processed concepts from phrase

public:
    Interpreter();
    ~Interpreter ();
    
    Language& getLanguage() {return oLanguage;};    
    AreaInterpreter* getAreaInterpreter(int area);
    std::vector<Concept>& getPhraseConcepts() {return listPhraseConcepts;};
    
    // set access to given knowledge
    void setKnowledge(Knowledge& oKnowledge) override;
    // interpret the given word returning its associated concept
    Concept* interpretWord(std::string word) override; 
    
    // processes given phrase 
    void processPhrase(std::string phrase);     
    
private:
    // interpret the given word using parallel threads
//    Concept* interpretWord2(std::string word);
    
};

}  

#endif
