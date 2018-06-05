#ifndef _TRON3_INTERPRET_LANGUAGE_SEARCHER_H
#define _TRON3_INTERPRET_LANGUAGE_SEARCHER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron/util/groups/Element.h"

namespace tron3
{
// Interface for classes targeted to search language words.
class iLanguageSearcher
{
public:    
    // search the language element associated to given word
    virtual tron::Element* searchWord(std::string word) = 0;
};

}  

#endif
