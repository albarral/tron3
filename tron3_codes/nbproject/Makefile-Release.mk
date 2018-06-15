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
	${OBJECTDIR}/src/tron3/codes/ActionCodes.o \
	${OBJECTDIR}/src/tron3/codes/FeatureCodes.o \
	${OBJECTDIR}/src/tron3/codes/NatureCodes.o \
	${OBJECTDIR}/src/tron3/codes/NexusCodes.o \
	${OBJECTDIR}/src/tron3/codes/ObjectCodes.o \
	${OBJECTDIR}/src/tron3/codes/actions/ManipulationCodes.o \
	${OBJECTDIR}/src/tron3/codes/actions/MovementCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/AffirmationCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/ColorCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/DirectionCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/LocationCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/ProximityCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/QuantityCodes.o \
	${OBJECTDIR}/src/tron3/codes/features/SpeedCodes.o \
	${OBJECTDIR}/src/tron3/codes/objects/BodyCodes.o \
	${OBJECTDIR}/src/tron3/codes/objects/ShapeCodes.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_codes.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_codes.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_codes.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/codes/ActionCodes.o: src/tron3/codes/ActionCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/ActionCodes.o src/tron3/codes/ActionCodes.cpp

${OBJECTDIR}/src/tron3/codes/FeatureCodes.o: src/tron3/codes/FeatureCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/FeatureCodes.o src/tron3/codes/FeatureCodes.cpp

${OBJECTDIR}/src/tron3/codes/NatureCodes.o: src/tron3/codes/NatureCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/NatureCodes.o src/tron3/codes/NatureCodes.cpp

${OBJECTDIR}/src/tron3/codes/NexusCodes.o: src/tron3/codes/NexusCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/NexusCodes.o src/tron3/codes/NexusCodes.cpp

${OBJECTDIR}/src/tron3/codes/ObjectCodes.o: src/tron3/codes/ObjectCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/ObjectCodes.o src/tron3/codes/ObjectCodes.cpp

${OBJECTDIR}/src/tron3/codes/actions/ManipulationCodes.o: src/tron3/codes/actions/ManipulationCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/actions/ManipulationCodes.o src/tron3/codes/actions/ManipulationCodes.cpp

${OBJECTDIR}/src/tron3/codes/actions/MovementCodes.o: src/tron3/codes/actions/MovementCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/actions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/actions/MovementCodes.o src/tron3/codes/actions/MovementCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/AffirmationCodes.o: src/tron3/codes/features/AffirmationCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/AffirmationCodes.o src/tron3/codes/features/AffirmationCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/ColorCodes.o: src/tron3/codes/features/ColorCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/ColorCodes.o src/tron3/codes/features/ColorCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/DirectionCodes.o: src/tron3/codes/features/DirectionCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/DirectionCodes.o src/tron3/codes/features/DirectionCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/LocationCodes.o: src/tron3/codes/features/LocationCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/LocationCodes.o src/tron3/codes/features/LocationCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/ProximityCodes.o: src/tron3/codes/features/ProximityCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/ProximityCodes.o src/tron3/codes/features/ProximityCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/QuantityCodes.o: src/tron3/codes/features/QuantityCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/QuantityCodes.o src/tron3/codes/features/QuantityCodes.cpp

${OBJECTDIR}/src/tron3/codes/features/SpeedCodes.o: src/tron3/codes/features/SpeedCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/features/SpeedCodes.o src/tron3/codes/features/SpeedCodes.cpp

${OBJECTDIR}/src/tron3/codes/objects/BodyCodes.o: src/tron3/codes/objects/BodyCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/objects/BodyCodes.o src/tron3/codes/objects/BodyCodes.cpp

${OBJECTDIR}/src/tron3/codes/objects/ShapeCodes.o: src/tron3/codes/objects/ShapeCodes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/codes/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/codes/objects/ShapeCodes.o src/tron3/codes/objects/ShapeCodes.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_codes.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
