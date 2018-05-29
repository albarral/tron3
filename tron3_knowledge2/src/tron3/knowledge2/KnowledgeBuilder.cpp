/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge2/KnowledgeBuilder.h"
// actions
#include "tron3/knowledge2/actions/ManipulationCategory.h"
#include "tron3/knowledge2/actions/MovementCategory.h"
// features
#include "tron3/knowledge2/features/AffirmationCategory.h"
#include "tron3/knowledge2/features/ColorCategory.h"
#include "tron3/knowledge2/features/DirectionCategory.h"
#include "tron3/knowledge2/features/LocationCategory.h"
#include "tron3/knowledge2/features/ProximityCategory.h"
#include "tron3/knowledge2/features/QuantityCategory.h"
#include "tron3/knowledge2/features/SpeedCategory.h"
// objects
#include "tron3/knowledge2/objects/BodyCategory.h"
#include "tron3/knowledge2/objects/ShapesCategory.h"
//
#include "tron3/knowledge/defs/ConceptsNature.h"

namespace tron3
{

void KnowledgeBuilder::build(Knowledge& oKnowledge)
{          
    for (int nature = 0; nature < ConceptsNature::eNATURE_DIM; nature++)
        buildArea(oKnowledge.getKnowledgeArea(nature));
}

void KnowledgeBuilder::buildArea(KnowledgeArea* pKnowledgeArea)
{
    switch (pKnowledgeArea->getArea())
    {
        case ConceptsNature::eNATURE_ACTION:
        {
            ManipulationCategory oManipulationCategory;
            MovementCategory oMovementCategory;
            pKnowledgeArea->addCategory(oManipulationCategory);
            pKnowledgeArea->addCategory(oMovementCategory);            
            break;
        }
        case ConceptsNature::eNATURE_OBJECT:
        {
            BodyCategory oBodyCategory;
            ShapesCategory oShapesCategory;
            pKnowledgeArea->addCategory(oBodyCategory);
            pKnowledgeArea->addCategory(oShapesCategory);
            break;
        }
        case ConceptsNature::eNATURE_FEATURE:
        {
            AffirmationCategory oAffirmationCategory;
            ColorCategory oColorCategory;
            DirectionCategory oDirectionCategory;
            LocationCategory oLocationCategory;
            ProximityCategory oProximityCategory;
            QuantityCategory oQuantityCategory;
            SpeedCategory oSpeedCategory;
            pKnowledgeArea->addCategory(oAffirmationCategory);
            pKnowledgeArea->addCategory(oColorCategory);
            pKnowledgeArea->addCategory(oDirectionCategory);
            pKnowledgeArea->addCategory(oLocationCategory);
            pKnowledgeArea->addCategory(oProximityCategory);
            pKnowledgeArea->addCategory(oQuantityCategory);
            pKnowledgeArea->addCategory(oSpeedCategory);
            break;
        }
    }
}


}




