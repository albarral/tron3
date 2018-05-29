#ifndef __TRON3_KNOWLEDGE_FEATURE_CATEGORIES_H
#define __TRON3_KNOWLEDGE_FEATURE_CATEGORIES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

namespace tron3
{
/** 
 * Definition of feature categories.
 */
 class FeatureCategories
{
 public:     
    enum eCategory
    {
        eFEATURE_AFFIRMATION,             
        eFEATURE_COLOR,             
        eFEATURE_DIRECTION,        
        eFEATURE_LOCATION,         
        eFEATURE_PROXIMITY,             
        eFEATURE_QUANTITY,             
        eFEATURE_SPEED,              
        eFEATURE_DIM
    };

 public:         
//    QualifierCategories();              	
};
}
#endif
