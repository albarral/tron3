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
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o \
	${OBJECTDIR}/src/tron3/interpret/Interpreter.o


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
LDLIBSOPTIONS=-Wl,-rpath,../tron3_knowledge/dist/Debug/GNU-Linux -L../tron3_knowledge/dist/Debug/GNU-Linux -ltron3_knowledge -Wl,-rpath,../tron3_language/dist/Debug/GNU-Linux -L../tron3_language/dist/Debug/GNU-Linux -ltron3_language -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}: ../tron3_knowledge/dist/Debug/GNU-Linux/libtron3_knowledge.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}: ../tron3_language/dist/Debug/GNU-Linux/libtron3_language.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o: src/tron3/interpret/AreaInterpreter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_knowledge/src -I../tron3_language/src -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/AreaInterpreter.o src/tron3/interpret/AreaInterpreter.cpp

${OBJECTDIR}/src/tron3/interpret/Interpreter.o: src/tron3/interpret/Interpreter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/interpret
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_knowledge/src -I../tron3_language/src -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/interpret/Interpreter.o src/tron3/interpret/Interpreter.cpp

# Subprojects
.build-subprojects:
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron3_language && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_interpret.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron3_language && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
