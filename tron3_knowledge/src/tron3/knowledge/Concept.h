#ifndef __TRON3_KNOWLEDGE_CONCEPT_H
#define __TRON3_KNOWLEDGE_CONCEPT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/groups/Element.h"

namespace tron3
{
// Class representing a concept. 
// It's a group element with a given nature, that is grouped in categories.
class Concept : public tron::Element
{
protected:
    int nature;      // concept's nature

public:
    Concept();
    Concept(int id, std::string name);
    //~Concept();
    
    void set(int id, std::string name);
    void setNature(int value) {nature = value;};
    int getNature() {return nature;}; 
    
    virtual std::string toString();
};

}  

#endif
