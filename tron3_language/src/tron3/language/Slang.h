#ifndef __TRON3_LANGUAGE_SLANG_H
#define __TRON3_LANGUAGE_SLANG_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>
#include <string>

#include "tron/util/groups/Element.h"

namespace tron3
{
// A Slang is a group of words (elements) mapped by their name (each element representing a knowledge concept) .
// The elements in a Slang share a common feature (their names start with the same letter).
// A Slang is itself an element.
class Slang : public tron::Element 
{
private:
    std::map<std::string, tron::Element> mapWords; // map <name, element>

public:
    Slang();
    Slang(int id, std::string name);
    ~Slang();
    
    void clear();
    void addWord(tron::Element& oElement);
    std::map<std::string, tron::Element>& getMapWords() {return mapWords;};
    
    // get element with the specified name, returns null if not found
    tron::Element* getWord(std::string name);
    int getNumWords() {return mapWords.size();};    

    virtual std::string toString();
};

}  

#endif
