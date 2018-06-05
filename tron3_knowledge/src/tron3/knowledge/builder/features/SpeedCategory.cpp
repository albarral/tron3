/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/SpeedCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
SpeedCategory::SpeedCategory() : Category(FeatureCategories::eFEATURE_SPEED, "speed")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eSPEED_FAST, "fast");
    addConcept(oConcept);
    oConcept.set(eSPEED_SLOW, "slow");                         
    addConcept(oConcept);
}
}