#ifndef __TRON3_KNOWLEDGE_CATEGORY_H
#define __TRON3_KNOWLEDGE_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/iKnowledgeStorage.h"
#include "tron3/knowledge/Concept.h"

namespace tron3
{
// A category is a group of mapped concepts.
// The concepts in a category share the same nature (action, object, feature, ...) and belong to a same functional family (colors, shapes, animals, movement actions, ...)
// A category is itself a concept
class Category : public Concept, iKnowledgeStorage 
{
private:
    std::map<int, Concept> mapConcepts; 

public:
    Category();
    Category(int id, std::string name);
    ~Category();
    
    void clear();
    std::map<int, Concept>& getMapConcepts() {return mapConcepts;};
    int getNumConcepts() {return mapConcepts.size();};    
    
    // add specified concept
    bool addConcept(Concept& oConcept) override;
    // search the concept of given area, category and id
    Concept* searchConcept(int area, int categoryId, int conceptId) override;
    // describe path of given concept
    std::string describeConceptPath(Concept& oConcept) override;

    virtual std::string toString();
};

}  

#endif
