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
	${OBJECTDIR}/src/tron3/knowledge2/KnowledgeBuilder.o \
	${OBJECTDIR}/src/tron3/knowledge2/actions/ManipulationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/actions/MovementCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/AffirmationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/ColorCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/DirectionCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/LocationCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/ProximityCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/QuantityCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/features/SpeedCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/objects/BodyCategory.o \
	${OBJECTDIR}/src/tron3/knowledge2/objects/ShapesCategory.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge2.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge2.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge2.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/knowledge2/KnowledgeBuilder.o: src/tron3/knowledge2/KnowledgeBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/KnowledgeBuilder.o src/tron3/knowledge2/KnowledgeBuilder.cpp

${OBJECTDIR}/src/tron3/knowledge2/actions/ManipulationCategory.o: src/tron3/knowledge2/actions/ManipulationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/actions/ManipulationCategory.o src/tron3/knowledge2/actions/ManipulationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/actions/MovementCategory.o: src/tron3/knowledge2/actions/MovementCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/actions/MovementCategory.o src/tron3/knowledge2/actions/MovementCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/AffirmationCategory.o: src/tron3/knowledge2/features/AffirmationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/AffirmationCategory.o src/tron3/knowledge2/features/AffirmationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/ColorCategory.o: src/tron3/knowledge2/features/ColorCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/ColorCategory.o src/tron3/knowledge2/features/ColorCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/DirectionCategory.o: src/tron3/knowledge2/features/DirectionCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/DirectionCategory.o src/tron3/knowledge2/features/DirectionCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/LocationCategory.o: src/tron3/knowledge2/features/LocationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/LocationCategory.o src/tron3/knowledge2/features/LocationCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/ProximityCategory.o: src/tron3/knowledge2/features/ProximityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/ProximityCategory.o src/tron3/knowledge2/features/ProximityCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/QuantityCategory.o: src/tron3/knowledge2/features/QuantityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/QuantityCategory.o src/tron3/knowledge2/features/QuantityCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/features/SpeedCategory.o: src/tron3/knowledge2/features/SpeedCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/features/SpeedCategory.o src/tron3/knowledge2/features/SpeedCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/objects/BodyCategory.o: src/tron3/knowledge2/objects/BodyCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/objects/BodyCategory.o src/tron3/knowledge2/objects/BodyCategory.cpp

${OBJECTDIR}/src/tron3/knowledge2/objects/ShapesCategory.o: src/tron3/knowledge2/objects/ShapesCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/knowledge2/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/knowledge2/objects/ShapesCategory.o src/tron3/knowledge2/objects/ShapesCategory.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_knowledge2.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
