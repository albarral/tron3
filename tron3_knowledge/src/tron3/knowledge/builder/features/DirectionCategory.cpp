/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/DirectionCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
DirectionCategory::DirectionCategory() : Category(FeatureCategories::eFEATURE_DIRECTION, "direction")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eDIRECTION_UP, "up");
    addConcept(oConcept);
    oConcept.set(eDIRECTION_DOWN, "down");                         
    addConcept(oConcept);
    oConcept.set(eDIRECTION_LEFT, "left");                      
    addConcept(oConcept);
    oConcept.set(eDIRECTION_RIGHT, "right");                   
    addConcept(oConcept);
    oConcept.set(eDIRECTION_FRONT, "front");                        
    addConcept(oConcept);
    oConcept.set(eDIRECTION_BACK, "back");       
    addConcept(oConcept);
}
}