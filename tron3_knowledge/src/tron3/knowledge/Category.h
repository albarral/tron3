#ifndef __TRON3_KNOWLEDGE_CATEGORY_H
#define __TRON3_KNOWLEDGE_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/Concept.h"

namespace tron3
{
// A category is a group of mapped concepts.
// The concepts in a category share the same nature (action, object, feature, ...) and belong to a same functional family (colors, shapes, animals, movement actions, ...)
// A category is itself a concept
class Category : public Concept 
{
private:
    std::map<int, Concept> mapConcepts; 

public:
    Category();
    Category(int id, std::string name);
    ~Category();
    
    void clear();
    void addConcept(Concept& oConcept);
    std::map<int, Concept>& getMapConcepts() {return mapConcepts;};
    
    // get concept with the specified id, returns null if not found
    Concept* getConcept(int conceptId);
    int getNumConcepts() {return mapConcepts.size();};    

    virtual std::string toString();
};

}  

#endif
