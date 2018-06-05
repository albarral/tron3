#ifndef __TRON3_INTERPRET_SLANG_H
#define __TRON3_INTERPRET_SLANG_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/interpret/language/iLanguageSearcher.h"

namespace tron3
{
// A Slang is a group of words (elements) mapped by their name (each element representing a knowledge concept) .
// All elements in the Slang have a restriction: their names must start with the slang letter. This is checked on addWord() method. 
class Slang : public iLanguageSearcher
{
private:
    char letter;     // slang letter (initial letter restriction for all slang words)
    std::map<std::string, tron::Element> mapWords; // map <name, element>

public:
    Slang();
    Slang(char letter);
    ~Slang();
    
    void setLetter(char letter) {this->letter = letter;}; 
    char getLetter() {return letter;};
    
    void clear();
    // adds element to slang (provided it has a proper initial letter)
    bool addWord(tron::Element& oElement);
    std::map<std::string, tron::Element>& getMapWords() {return mapWords;};    
    int getNumWords() {return mapWords.size();};    

    // search the language element associated to given word
    tron::Element* searchWord(std::string word) override;

    std::string toString();
};

}  

#endif
