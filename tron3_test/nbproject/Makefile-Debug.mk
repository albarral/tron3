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
	${OBJECTDIR}/src/TestAlive.o \
	${OBJECTDIR}/src/TestInterpret.o \
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
LDLIBSOPTIONS=-Wl,-rpath,../tron3_alive/dist/Debug/GNU-Linux -L../tron3_alive/dist/Debug/GNU-Linux -ltron3_alive -Wl,-rpath,../tron3_interpret/dist/Debug/GNU-Linux -L../tron3_interpret/dist/Debug/GNU-Linux -ltron3_interpret -Wl,-rpath,../tron3_knowledge/dist/Debug/GNU-Linux -L../tron3_knowledge/dist/Debug/GNU-Linux -ltron3_knowledge -Wl,-rpath,../../tron/tron_control/dist/Debug/GNU-Linux -L../../tron/tron_control/dist/Debug/GNU-Linux -ltron_control -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -Wl,-rpath,../../tron/tron_tools/dist/Debug/GNU-Linux -L../../tron/tron_tools/dist/Debug/GNU-Linux -ltron_tools -llog4cxx

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../tron3_alive/dist/Debug/GNU-Linux/libtron3_alive.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../tron3_interpret/dist/Debug/GNU-Linux/libtron3_interpret.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../tron3_knowledge/dist/Debug/GNU-Linux/libtron3_knowledge.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../../tron/tron_control/dist/Debug/GNU-Linux/libtron_control.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ../../tron/tron_tools/dist/Debug/GNU-Linux/libtron_tools.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/TestAlive.o: src/TestAlive.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_alive/src -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestAlive.o src/TestAlive.cpp

${OBJECTDIR}/src/TestInterpret.o: src/TestInterpret.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_alive/src -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestInterpret.o src/TestInterpret.cpp

${OBJECTDIR}/src/TestKnowledge.o: src/TestKnowledge.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_alive/src -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestKnowledge.o src/TestKnowledge.cpp

${OBJECTDIR}/src/main.o: src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_alive/src -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:
	cd ../tron3_alive && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron3_interpret && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_control && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron3_test

# Subprojects
.clean-subprojects:
	cd ../tron3_alive && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron3_interpret && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_control && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
