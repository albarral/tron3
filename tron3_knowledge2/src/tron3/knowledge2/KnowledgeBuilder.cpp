/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/knowledge2/KnowledgeBuilder.h"
// actions
#include "tron3/knowledge2/actions/ManipulationCategory.h"
#include "tron3/knowledge2/actions/MovementCategory.h"
// objects
#include "tron3/knowledge2/objects/BodyCategory.h"
#include "tron3/knowledge2/objects/ShapesCategory.h"
// features
#include "tron3/knowledge2/features/AffirmationCategory.h"
#include "tron3/knowledge2/features/ColorCategory.h"
#include "tron3/knowledge2/features/DirectionCategory.h"
#include "tron3/knowledge2/features/LocationCategory.h"
#include "tron3/knowledge2/features/ProximityCategory.h"
#include "tron3/knowledge2/features/QuantityCategory.h"
#include "tron3/knowledge2/features/SpeedCategory.h"

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




