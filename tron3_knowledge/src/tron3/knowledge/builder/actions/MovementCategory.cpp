/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/actions/MovementCategory.h"
#include "tron3/knowledge/defs/ActionCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
MovementCategory::MovementCategory() : Category(ActionCategories::eACTION_MOVEMENT, "movement")
{
    setNature(ConceptsNature::eNATURE_ACTION);

    Concept oConcept;
    oConcept.set(eMOVEMENT_MOVE, "move");
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_RAISE, "raise");                         
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_LOWER, "lower");                      
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_ADVANCE, "advance");                   
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_GOBACK, "go back");                        
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_STOP, "stop");       
    addConcept(oConcept);
}
}