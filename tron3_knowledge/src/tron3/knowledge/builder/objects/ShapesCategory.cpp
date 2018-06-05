/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/objects/ShapesCategory.h"
#include "tron3/knowledge/defs/ObjectCategories.h"
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{
ShapesCategory::ShapesCategory() : Category(ObjectCategories::eOBJECT_SHAPES, "shapes")
{
    setNature(ConceptsNature::eNATURE_OBJECT);

    Concept oConcept;
    oConcept.set(eSHAPE_CIRCLE, "circle");
    addConcept(oConcept);
    oConcept.set(eSHAPE_SQUARE, "square");                         
    addConcept(oConcept);
    oConcept.set(eSHAPE_ELLIPSE, "ellipse");                      
    addConcept(oConcept);
    oConcept.set(eSHAPE_RECTANGLE, "rectangle");       
    addConcept(oConcept);
    oConcept.set(eSHAPE_TRIANGLE, "triangle");                   
    addConcept(oConcept);
    oConcept.set(eSHAPE_LINE, "line");                        
    addConcept(oConcept);
    oConcept.set(eSHAPE_POINT, "point");       
    addConcept(oConcept);
}
}