/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron3/codes/NatureCodes.h"

namespace tron3
{
NatureCodes::NatureCodes()
{
    addCode(eNATURE_ACTION, "action");
    addCode(eNATURE_OBJECT, "object");
    addCode(eNATURE_FEATURE, "feature");
    addCode(eNATURE_INSTANCE, "instance");
    addCode(eNATURE_NEXUS, "nexus");
}
}




