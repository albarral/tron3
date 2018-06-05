#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/tron3/knowledge/Category.o \
	${OBJECTDIR}/src/tron3/knowledge/Concept.o \
	${OBJECTDIR}/src/tron3/knowledge/Knowledge.o \
	${OBJECTDIR}/src/tron3/knowledge/KnowledgeArea.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/KnowledgeBuilder.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/actions/ManipulationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/actions/MovementCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/AffirmationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/ColorCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/DirectionCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/LocationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/ProximityCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/QuantityCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/features/SpeedCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/objects/BodyCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/builder/objects/ShapesCategory.o \
	${OBJECTDIR}/src/tron3/knowledge/defs/ConceptsNature.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/knowledge/Category.o: src/tron3/knowledge/Category.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/Category.o src/tron3/knowledge/Category.cpp

${OBJECTDIR}/src/tron3/knowledge/Concept.o: src/tron3/knowledge/Concept.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/Concept.o src/tron3/knowledge/Concept.cpp

${OBJECTDIR}/src/tron3/knowledge/Knowledge.o: src/tron3/knowledge/Knowledge.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/Knowledge.o src/tron3/knowledge/Knowledge.cpp

${OBJECTDIR}/src/tron3/knowledge/KnowledgeArea.o: src/tron3/knowledge/KnowledgeArea.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/KnowledgeArea.o src/tron3/knowledge/KnowledgeArea.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/KnowledgeBuilder.o: src/tron3/knowledge/builder/KnowledgeBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/KnowledgeBuilder.o src/tron3/knowledge/builder/KnowledgeBuilder.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/actions/ManipulationCategory.o: src/tron3/knowledge/builder/actions/ManipulationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/actions/ManipulationCategory.o src/tron3/knowledge/builder/actions/ManipulationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/actions/MovementCategory.o: src/tron3/knowledge/builder/actions/MovementCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/actions/MovementCategory.o src/tron3/knowledge/builder/actions/MovementCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/AffirmationCategory.o: src/tron3/knowledge/builder/features/AffirmationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/AffirmationCategory.o src/tron3/knowledge/builder/features/AffirmationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/ColorCategory.o: src/tron3/knowledge/builder/features/ColorCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/ColorCategory.o src/tron3/knowledge/builder/features/ColorCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/DirectionCategory.o: src/tron3/knowledge/builder/features/DirectionCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/DirectionCategory.o src/tron3/knowledge/builder/features/DirectionCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/LocationCategory.o: src/tron3/knowledge/builder/features/LocationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/LocationCategory.o src/tron3/knowledge/builder/features/LocationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/ProximityCategory.o: src/tron3/knowledge/builder/features/ProximityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/ProximityCategory.o src/tron3/knowledge/builder/features/ProximityCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/QuantityCategory.o: src/tron3/knowledge/builder/features/QuantityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/QuantityCategory.o src/tron3/knowledge/builder/features/QuantityCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/features/SpeedCategory.o: src/tron3/knowledge/builder/features/SpeedCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/features/SpeedCategory.o src/tron3/knowledge/builder/features/SpeedCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/objects/BodyCategory.o: src/tron3/knowledge/builder/objects/BodyCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/objects/BodyCategory.o src/tron3/knowledge/builder/objects/BodyCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/builder/objects/ShapesCategory.o: src/tron3/knowledge/builder/objects/ShapesCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/builder/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/builder/objects/ShapesCategory.o src/tron3/knowledge/builder/objects/ShapesCategory.cpp

${OBJECTDIR}/src/tron3/knowledge/defs/ConceptsNature.o: src/tron3/knowledge/defs/ConceptsNature.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge/defs
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge/defs/ConceptsNature.o src/tron3/knowledge/defs/ConceptsNature.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
