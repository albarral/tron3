/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge/builder/KnowledgeBuilder.h"
// actions
#include "tron3/knowledge/builder/actions/ManipulationCategory.h"
#include "tron3/knowledge/builder/actions/MovementCategory.h"
// objects
#include "tron3/knowledge/builder/objects/BodyCategory.h"
#include "tron3/knowledge/builder/objects/ShapesCategory.h"
// features
#include "tron3/knowledge/builder/features/AffirmationCategory.h"
#include "tron3/knowledge/builder/features/ColorCategory.h"
#include "tron3/knowledge/builder/features/DirectionCategory.h"
#include "tron3/knowledge/builder/features/LocationCategory.h"
#include "tron3/knowledge/builder/features/ProximityCategory.h"
#include "tron3/knowledge/builder/features/QuantityCategory.h"
#include "tron3/knowledge/builder/features/SpeedCategory.h"

namespace tron3
{
KnowledgeBuilder::KnowledgeBuilder()
{
}

KnowledgeBuilder::~KnowledgeBuilder()
{
    for (Category* pCategory : listCategories)
    {
        if (pCategory != 0)
           delete (pCategory);
    }
    listCategories.clear();
}

void KnowledgeBuilder::load()
{
    // actions
    listCategories.push_back(new ManipulationCategory());
    listCategories.push_back(new MovementCategory());
    // objects
    listCategories.push_back(new BodyCategory());
    listCategories.push_back(new ShapesCategory);
    // features
    listCategories.push_back(new AffirmationCategory());
    listCategories.push_back(new ColorCategory());
    listCategories.push_back(new DirectionCategory());
    listCategories.push_back(new LocationCategory());
    listCategories.push_back(new ProximityCategory());
    listCategories.push_back(new QuantityCategory());
    listCategories.push_back(new SpeedCategory());
}

void KnowledgeBuilder::build(Knowledge& oKnowledge)
{          
    // for each category in the list, add it to knowledge
    for (Category* pCategory : listCategories)
    {
        oKnowledge.addCategory(*pCategory);                
    }
}

}




