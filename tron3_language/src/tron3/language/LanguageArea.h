#ifndef _TRON3_LANGUAGE_LANGUAGE_AREA_H
#define _TRON3_LANGUAGE_LANGUAGE_AREA_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>
#include <string>

#include "tron3/language/Slang.h"

namespace tron3
{
// A knowledge area holds all concept categories of a given nature.
class LanguageArea
{
private:
    int area;
    std::map<std::string, Slang> mapSlangs; // map <letter, slang> 

public:
    LanguageArea();
    ~LanguageArea ();

    void setArea(int value) {area = value;};
    int getArea(){return area;};
    
    void clear();
    void addSlang(std::string letter, Slang& oSlang);    
    std::map<std::string, Slang>& getMapSlangs() {return mapSlangs;};
    
    // get slang for the specified letter, returns null if not found
    Slang* getSlang(std::string letter);    
    int getNumSlangs() {return mapSlangs.size();};    
    
    std::string toString();    
};

}  

#endif
