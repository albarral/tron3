/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/objects/BodyCategory.h"
#include "tron3/knowledge/defs/ObjectCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
BodyCategory::BodyCategory() : Category(ObjectCategories::eOBJECT_BODY, "body")
{
    setNature(ConceptsNature::eNATURE_OBJECT);

    Concept oConcept;
    oConcept.set(eBODY_HEAD, "head");
    addConcept(oConcept);
    oConcept.set(eBODY_ARM, "arm");                         
    addConcept(oConcept);
    oConcept.set(eBODY_ARM_L, "left arm");                      
    addConcept(oConcept);
    oConcept.set(eBODY_ARMS, "arms");       
    addConcept(oConcept);

    oConcept.set(eBODY_HAND, "hand");                   
    addConcept(oConcept);
    oConcept.set(eBODY_HAND_L, "left hand");                        
    addConcept(oConcept);
    oConcept.set(eBODY_HANDS, "hands");       
    addConcept(oConcept);

    oConcept.set(eBODY_LEG, "leg");       
    addConcept(oConcept);
    oConcept.set(eBODY_LEG_L, "left leg");       
    addConcept(oConcept);    
    oConcept.set(eBODY_LEGS, "legs");       
    addConcept(oConcept);
}
}