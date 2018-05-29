#ifndef _TRON3_KNOWLEDGE_KNOWLEDGEAREA_H
#define _TRON3_KNOWLEDGE_KNOWLEDGEAREA_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron3/knowledge/Category.h"

namespace tron3
{
// A knowledge area holds all concept categories of a given nature.
class KnowledgeArea
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
    
    std::string toString();    
};

}  

#endif
