#ifndef _TRON3_LANGUAGE_LANGUAGE_H
#define _TRON3_LANGUAGE_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/language/LanguageArea.h"

namespace tron3
{
// The language holds a set of language areas, each holding all word slangs of a given knowledge nature.
class Language
{
protected:
    LanguageArea oVerbsArea;        // language area for action concepts
    LanguageArea oObjectsArea;      // language area for object concepts
    LanguageArea oQualifiersArea;   // language area for feature concepts
    LanguageArea oNamesArea;        // language area for instance concepts
    LanguageArea oPrepositionsArea;     // language area for nexus concepts

public:
    Language();
    ~Language ();
    
    void clear();
    LanguageArea* getLanguageArea(int area);
    
    std::string toString();    
};

}  

#endif
