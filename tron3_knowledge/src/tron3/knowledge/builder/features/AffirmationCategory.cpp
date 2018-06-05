/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/AffirmationCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
AffirmationCategory::AffirmationCategory() : Category(FeatureCategories::eFEATURE_AFFIRMATION, "affirmation")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eAFFIRMATION_YES, "yes");
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_NO, "no");                         
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_MAYBE, "maybe");                      
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_TOO, "too");                   
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_NEITHER, "neither");                        
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_OK, "ok");       
    addConcept(oConcept);
}
}