#ifndef _TRON3_INTERPRET_LANGUAGE_INTERPRETER_H
#define _TRON3_INTERPRET_LANGUAGE_INTERPRETER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron3/knowledge/Concept.h"
#include "tron3/knowledge/Knowledge.h"
#include "tron3/language/Language.h"

namespace tron3
{
// Interface for classes targeted to interpret language.
class iLanguageInterpreter
{
public:    
    // set access to knowledge
    virtual void setKnowledge(Knowledge& oKnowledge) = 0;
    // set access to language
    virtual void setLanguage(Language& oLanguage) = 0;
    // interpret the given word returning its associated concept
    virtual Concept* interpretWord(std::string word) = 0;
};

}  

#endif
