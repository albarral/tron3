#ifndef _TRON3_KNOWLEDGE_KNOWLEDGEAREA_H
#define _TRON3_KNOWLEDGE_KNOWLEDGEAREA_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/iKnowledgeStorage.h"
#include "tron3/knowledge/Category.h"

namespace tron3
{
// A knowledge area holds all concept categories of a given nature.
class KnowledgeArea : public iKnowledgeStorage
{
private:
    int area;
    std::map<int, Category> mapCategories; 

public:
    KnowledgeArea();
    ~KnowledgeArea ();

    void setArea(int value) {area = value;};
    int getArea(){return area;};
    
    void clear();
    void addCategory(Category& oCategory);    
    std::map<int, Category>& getMapCategories() {return mapCategories;};
    
    // get category with the specified id, returns null if not found
    Category* getCategory(int categoryId);    
    int getNumCategories() {return mapCategories.size();};    

    // add specified concept
    bool addConcept(Concept& oConcept) override;
    // search the concept of given area, category and id
    Concept* searchConcept(int area, int categoryId, int conceptId) override;
    
    std::string toString();    
};

}  

#endif
