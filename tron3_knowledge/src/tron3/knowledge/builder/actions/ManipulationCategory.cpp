/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/actions/ManipulationCategory.h"
#include "tron3/knowledge/defs/ActionCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
ManipulationCategory::ManipulationCategory() : Category(ActionCategories::eACTION_MANIPULATION, "manipulation")
{
    setNature(ConceptsNature::eNATURE_ACTION);

    Concept oConcept;
    oConcept.set(eMANIPULATION_TAKE, "take");
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PLACE, "place");                         
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PUSH, "push");                      
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PULL, "pull");                   
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_GRASP, "grasp");                        
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_RELEASE, "release");       
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_WAVE, "wave");       
    addConcept(oConcept);
}
}