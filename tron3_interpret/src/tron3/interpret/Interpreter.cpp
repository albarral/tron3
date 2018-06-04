/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

//#include <future>
//#include <stdexcept>      // std::out_of_range

#include "tron3/interpret/Interpreter.h"
#include "tron/util/StringUtil.h"

using namespace log4cxx;

namespace tron3
{
LoggerPtr Interpreter::logger(Logger::getLogger("tron3.interpret"));

Interpreter::Interpreter()
{          
}

Interpreter::~Interpreter()
{
    mapAreaInterpreters.clear();    
    listPhraseConcepts.clear();
}

AreaInterpreter* Interpreter::getAreaInterpreter(int area)
{
    try 
    {
        return &(mapAreaInterpreters.at(area));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                    
}

void Interpreter::setKnowledge(Knowledge& oKnowledge)
{
    // map knowledge to language    
    oLanguage.mapKnowledge(oKnowledge);
    
    // for each knowledge area, create a symmetric interpreter area
    for (auto& x : oKnowledge.getMapAreas()) 
    {
        AreaInterpreter oAreaInterpreter;
        int area = x.second.getArea();
        oAreaInterpreter.setArea(area);
        oAreaInterpreter.setKnowledge(oKnowledge); 
        oAreaInterpreter.setLanguage(oLanguage);
        mapAreaInterpreters.emplace(area, oAreaInterpreter);
    }    
}


Concept* Interpreter::interpretWord(std::string word)
{
    // (TEMP) done sequentially, but must be done in PARALLEL!
    Concept* pConcept;
    for (auto& x : mapAreaInterpreters) 
    {
        pConcept = x.second.interpretWord(word);
        // if interpreted skip
        if (pConcept != nullptr)
            break;
    }    
    
    return pConcept;
}

//Concept* Interpreter::interpretWord2(std::string word)
//{
//    std::vector<std::future<Concept*>> futures;
//    // launch area interpreters in parallel
//    for (auto& x : mapAreaInterpreters) 
//    {
//        std::future<Concept*> futureConcept = std::async(x.second.interpretWord, word);
//        futures.push_back(futureConcept);
//    }    
//
//    //retrieve and print the value stored in the future
//    Concept* pConcept = nullptr;
//    for(auto &res : futures) 
//    {
//        pConcept = res.get();
//        // if interpreted skip
//        if (pConcept != nullptr)
//            break;
//    }
//
//    return pConcept;
//}

void Interpreter::processPhrase(std::string phrase)
{
    listPhraseConcepts.clear();
    
    Concept* pConcept;
    std::vector<std::string> listWords = tron::StringUtil::split(phrase, " ");
    for (std::string word : listWords)
    {
        pConcept = interpretWord(word);
        if (pConcept != nullptr)
            listPhraseConcepts.push_back(*pConcept);
    }    
}
}




