/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/features/QuantityCategory.h"
#include "tron3/knowledge/defs/FeatureCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
QuantityCategory::QuantityCategory() : Category(FeatureCategories::eFEATURE_QUANTITY, "quantity")
{
    setNature(ConceptsNature::eNATURE_FEATURE);

    Concept oConcept;
    oConcept.set(eQUANTITY_MORE, "more");
    addConcept(oConcept);
    oConcept.set(eQUANTITY_LESS, "less");                         
    addConcept(oConcept);
    oConcept.set(eQUANTITY_MUCH, "much");                      
    addConcept(oConcept);
    oConcept.set(eQUANTITY_FEW, "few");                   
    addConcept(oConcept);
    oConcept.set(eQUANTITY_VERY, "very");                        
    addConcept(oConcept);
    oConcept.set(eQUANTITY_ALL, "all");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_NOTHING, "nothing");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_ENOUGH, "enough");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_EQUAL, "equal");       
    addConcept(oConcept);    
    oConcept.set(eQUANTITY_ALMOST, "almost");       
    addConcept(oConcept);    
}
}