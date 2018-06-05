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
	${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o \
	${OBJECTDIR}/src/tron3/interpret/Interpreter.o \
	${OBJECTDIR}/src/tron3/interpret/language/Language.o \
	${OBJECTDIR}/src/tron3/interpret/language/LanguageArea.o \
	${OBJECTDIR}/src/tron3/interpret/language/Slang.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o: src/tron3/interpret/AreaInterpreter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o src/tron3/interpret/AreaInterpreter.cpp

${OBJECTDIR}/src/tron3/interpret/Interpreter.o: src/tron3/interpret/Interpreter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/Interpreter.o src/tron3/interpret/Interpreter.cpp

${OBJECTDIR}/src/tron3/interpret/language/Language.o: src/tron3/interpret/language/Language.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret/language
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/language/Language.o src/tron3/interpret/language/Language.cpp

${OBJECTDIR}/src/tron3/interpret/language/LanguageArea.o: src/tron3/interpret/language/LanguageArea.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret/language
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/language/LanguageArea.o src/tron3/interpret/language/LanguageArea.cpp

${OBJECTDIR}/src/tron3/interpret/language/Slang.o: src/tron3/interpret/language/Slang.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret/language
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/language/Slang.o src/tron3/interpret/language/Slang.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
