/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/LocationCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
LocationCategory::LocationCategory() : Category(FeatureCategories::eFEATURE_LOCATION, "location")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eLOCATION_OVER, "over");
    addConcept(oConcept);
    oConcept.set(eLOCATION_UNDER, "under");                         
    addConcept(oConcept);
    oConcept.set(eLOCATION_LEFT_TO, "left to");                      
    addConcept(oConcept);
    oConcept.set(eLOCATION_RIGHT_TO, "right to");                   
    addConcept(oConcept);
    oConcept.set(eLOCATION_INFRONT, "in front of");                        
    addConcept(oConcept);
    oConcept.set(eLOCATION_BEHIND, "behind");       
    addConcept(oConcept);
    oConcept.set(eLOCATION_INSIDE, "inside");       
    addConcept(oConcept);
    oConcept.set(eLOCATION_OUTSIDE, "outside");       
    addConcept(oConcept);
}
}