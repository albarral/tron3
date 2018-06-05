/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/ProximityCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
ProximityCategory::ProximityCategory() : Category(FeatureCategories::eFEATURE_PROXIMITY, "proximity")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(ePROXIMITY_HERE, "here");
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_THERE, "there");                         
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_NEAR, "near");                      
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_FAR, "far");                   
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_AROUND, "around");                        
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_AWAY, "away");       
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_TOGETHER, "together");       
    addConcept(oConcept);
}
}