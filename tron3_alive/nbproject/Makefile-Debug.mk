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
	${OBJECTDIR}/src/tron3/alive/AliveManager.o \
	${OBJECTDIR}/src/tron3/alive/modules/Communicator.o


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
LDLIBSOPTIONS=-Wl,-rpath,../tron3_interpret/dist/Debug/GNU-Linux -L../tron3_interpret/dist/Debug/GNU-Linux -ltron3_interpret -Wl,-rpath,../tron3_knowledge/dist/Debug/GNU-Linux -L../tron3_knowledge/dist/Debug/GNU-Linux -ltron3_knowledge -Wl,-rpath,../../tron/tron_control/dist/Debug/GNU-Linux -L../../tron/tron_control/dist/Debug/GNU-Linux -ltron_control -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -Wl,-rpath,../../tron/tron_tools/dist/Debug/GNU-Linux -L../../tron/tron_tools/dist/Debug/GNU-Linux -ltron_tools

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ../tron3_interpret/dist/Debug/GNU-Linux/libtron3_interpret.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ../tron3_knowledge/dist/Debug/GNU-Linux/libtron3_knowledge.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ../../tron/tron_control/dist/Debug/GNU-Linux/libtron_control.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ../../tron/tron_tools/dist/Debug/GNU-Linux/libtron_tools.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron3/alive/AliveManager.o: src/tron3/alive/AliveManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/alive
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/alive/AliveManager.o src/tron3/alive/AliveManager.cpp

${OBJECTDIR}/src/tron3/alive/modules/Communicator.o: src/tron3/alive/modules/Communicator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron3/alive/modules
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron3_interpret/src -I../tron3_knowledge/src -I../../tron/tron_control/src -I../../tron/tron_util/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron3/alive/modules/Communicator.o src/tron3/alive/modules/Communicator.cpp

# Subprojects
.build-subprojects:
	cd ../tron3_interpret && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_control && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron3_alive.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../tron3_interpret && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron3_knowledge && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_control && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
