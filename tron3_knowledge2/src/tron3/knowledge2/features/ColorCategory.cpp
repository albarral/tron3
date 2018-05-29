/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge2/features/ColorCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
ColorCategory::ColorCategory() : Category(FeatureCategories::eFEATURE_COLOR, "colors")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eCOLOR_RED, "red");
    addConcept(oConcept);
    oConcept.set(eCOLOR_GREEN, "green");                         
    addConcept(oConcept);
    oConcept.set(eCOLOR_BLUE, "blue");                      
    addConcept(oConcept);
    oConcept.set(eCOLOR_YELLOW, "yellow");                   
    addConcept(oConcept);
    oConcept.set(eCOLOR_ORANGE, "orange");                        
    addConcept(oConcept);
    oConcept.set(eCOLOR_BROWN, "brown");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_BLACK, "black");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_WHITE, "white");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_GREY, "grey");       
    addConcept(oConcept);    
}
}