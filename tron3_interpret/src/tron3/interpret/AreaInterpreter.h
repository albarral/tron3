#ifndef _TRON3_INTERPRET_AREA_INTERPRETER_H
#define _TRON3_INTERPRET_AREA_INTERPRETER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron3/interpret/iLanguageInterpreter.h"
#include "tron3/interpret/language/Language.h"
#include "tron3/interpret/language/LanguageArea.h"

namespace tron3
{
// A knowledge area holds all concept categories of a given nature.
class AreaInterpreter : public iLanguageInterpreter
{
private:
    static log4cxx::LoggerPtr logger;
    int area;
    KnowledgeArea* pKnowledgeArea;
    LanguageArea* pLanguageArea;

public:
    AreaInterpreter();
    ~AreaInterpreter ();

    void setArea(int value) {area = value;};
    int getArea(){return area;};
    
    // set access to knowledge
    void setKnowledge(Knowledge& oKnowledge) override;
    // set access to language
    void setLanguage(Language& oLanguage);
    // interpret the given word returning its associated concept
    Concept* interpretWord(std::string word) override;
};

}  

#endif
