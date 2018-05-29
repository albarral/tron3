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
	${OBJECTDIR}/src/TestKnowledge.o \
	${OBJECTDIR}/src/main.o


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
LDLIBSOPTIONS=-Wl,-rpath,../tron3_knowledge/dist/Debug/GNU-Linux -L../tron3_knowledge/dist/Debug/GNU-Linux -ltron3_knowledge -Wl,-rpath,../tron3_knowledge2/dist/Debug/GNU-Linux -L../tron3_knowledge2/dist/Debug/GNU-Linux -ltron3_knowledge2 -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -llog4cxx

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../tron3_knowledge/dist/Debug/GNU-Linux/libtron3_knowledge.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../tron3_knowledge2/dist/Debug/GNU-Linux/libtron3_knowledge2.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/TestKnowledge.o: src/TestKnowledge.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_knowledge/src -I../tron3_knowledge2/src -I../../tron/tron_util/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestKnowledge.o src/TestKnowledge.cpp

${OBJECTDIR}/src/main.o: src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_knowledge/src -I../tron3_knowledge2/src -I../../tron/tron_util/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron3_knowledge2 && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test

# Subprojects
.clean-subprojects:
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron3_knowledge2 && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
