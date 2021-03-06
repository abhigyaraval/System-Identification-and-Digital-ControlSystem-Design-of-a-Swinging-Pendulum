###########################################################################
## Makefile generated for Simulink model 'pHSystem'. 
## 
## Makefile     : pHSystem.mk
## Generated on : Sun Dec 18 14:37:39 2016
## MATLAB Coder version: 3.2 (R2016b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/pHSystem.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = pHSystem
MAKEFILE                  = pHSystem.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2016b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2016b/bin
MATLAB_ARCH_BIN           = C:/PROGRA~1/MATLAB/R2016b/bin/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = C:/EEE481LabSetup/OnlineDevelopment/EEE481Library_r2015a
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODELREF_LINK_RSPFILE_NAME = pHSystem_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Arduino ARM v1.6.7 | gmake (64-bit Windows)
# Supported Version(s):    
# ToolchainInfo Version:   R2016b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ARDUINO_ROOT
# ARDUINO_SAM_ROOT
# ARDUINO_PORT
# ARDUINO_MCU
# ARDUINO_BAUD
# ARDUINO_PROTOCOL
# ARDUINO_F_CPU

#-----------
# MACROS
#-----------

SHELL            = %SystemRoot%/system32/cmd.exe
PRODUCT_HEX      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_BIN      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).bin
ARDUINO_TOOLS    = $(ARDUINO_SAM_ROOT)/tools/arm-none-eabi-gcc/4.8.3-2014q1/bin

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -Wl,--end-group -lm -gcc

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Arduino ARM Assembler
AS_PATH = $(ARDUINO_TOOLS)
AS = $(AS_PATH)/arm-none-eabi-gcc

# C Compiler: Arduino ARM C Compiler
CC_PATH = $(ARDUINO_TOOLS)
CC = $(CC_PATH)/arm-none-eabi-gcc

# Linker: Arduino ARM Linker
LD_PATH = $(ARDUINO_TOOLS)
LD = $(LD_PATH)/arm-none-eabi-gcc

# C++ Compiler: Arduino ARM C++ Compiler
CPP_PATH = $(ARDUINO_TOOLS)
CPP = $(CPP_PATH)/arm-none-eabi-g++

# C++ Linker: Arduino ARM C++ Linker
CPP_LD_PATH = $(ARDUINO_TOOLS)
CPP_LD = $(CPP_LD_PATH)/arm-none-eabi-gcc

# Archiver: Arduino ARM Archiver
AR_PATH = $(ARDUINO_TOOLS)
AR = $(AR_PATH)/arm-none-eabi-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Binary Converter: Binary Converter
OBJCOPY_PATH = $(ARDUINO_SAM_ROOT)/tools/arm-none-eabi-gcc/4.8.3-2014q1/bin
OBJCOPY = $(OBJCOPY_PATH)/arm-none-eabi-objcopy

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      =
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
ASFLAGS              = -MD \
                       -Wall \
                       -x assembler-with-cpp \
                       $(ASFLAGS_ADDITIONAL) \
                       $(DEFINES) \
                       $(INCLUDES) \
                       -c
OBJCOPYFLAGS_BIN     = -O binary $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = -Os \
                       -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -nostdlib  \
                       --param max-inline-insns-single=500  \
                       -Dprintf=iprintf  \
                       -DARDUINO=10607  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@" 
CPPFLAGS             = -std=gnu++11 -fno-threadsafe-statics -fno-rtti -fno-exceptions  \
                       -Os \
                       -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -nostdlib  \
                       --param max-inline-insns-single=500  \
                       -Dprintf=iprintf  \
                       -DARDUINO=10607  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@" 
CPP_LDFLAGS          =  -Os -Wl,-Map="$(PRODUCT_NAME).map" -Wl,--gc-sections
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =  -Os -Wl,-Map="$(PRODUCT_NAME).map" -Wl,--gc-sections
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =

#--------------------
# File extensions
#--------------------

ASM_Type1_Ext       = .S
OBJ_EXT             = .o
ASM_EXT             = .s
C_DEP               = .dep
H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
EXE_EXT             = .elf
SHAREDLIB_EXT       = .so
CXX_EXT             = .cxx
C_DEP               = .dep
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
UNIX_TYPE1_EXT      = .cc
UNIX_TYPE2_EXT      = .C
EXE_EXT             =
SHAREDLIB_EXT       =
STATICLIB_EXT       = .a
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/pHSystem.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/pHSystem_ert_rtw -I$(START_DIR) -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/system/libsam -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/system/CMSIS/CMSIS/Include -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/system/CMSIS/Device/ATMEL -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/avr -I$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x -IC:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../include -IC:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/include -IC:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMODEL=pHSystem -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DONESTEPFCN=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64 -DMW_TIMERID=9 -DMW_TIMERCOUNT=656250 -DMW_SAM_CLOCKID=TC_CMR_TCCLKS_TIMER_CLOCK4 -D_RTT_BAUDRATE_SERIAL0_=9600 -D_RTT_BAUDRATE_SERIAL1_=9600 -D_RTT_BAUDRATE_SERIAL2_=9600 -D_RTT_BAUDRATE_SERIAL3_=9600 -D_RTT_ANALOG_REF_=0
DEFINES_BUILD_ARGS = -DONESTEPFCN=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_OPTS = -DTID01EQ=1
DEFINES_SKIPFORSIL = -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64
DEFINES_STANDARD = -DMODEL=pHSystem -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/pHSystem_ert_rtw/pHSystem.c $(START_DIR)/pHSystem_ert_rtw/pHSystem_data.c $(START_DIR)/pHSystem_ert_rtw/rtGetInf.c $(START_DIR)/pHSystem_ert_rtw/rtGetNaN.c $(START_DIR)/pHSystem_ert_rtw/rt_nonfinite.c $(START_DIR)/pHSensor_wrapper.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/avr/dtostrf.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/cortex_handlers.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/hooks.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/iar_calls_sam3.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/itoa.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/syscalls_sam3.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WInterrupts.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_analog.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_digital.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_shift.c $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/abi.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/IPAddress.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/new.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Print.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Reset.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/RingBuffer.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Stream.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/UARTClass.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USARTClass.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/CDC.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/PluggableUSB.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/USBCore.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_pulse.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WMath.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WString.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/watchdog.cpp $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/variant.cpp C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoARMScheduler.cpp C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arm_cortex_m_multitasking.c

MAIN_SRC = $(START_DIR)/pHSystem_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = pHSystem.o pHSystem_data.o rtGetInf.o rtGetNaN.o rt_nonfinite.o pHSensor_wrapper.o dtostrf.o cortex_handlers.o hooks.o iar_calls_sam3.o itoa.o syscalls_sam3.o WInterrupts.o wiring.o wiring_analog.o wiring_digital.o wiring_shift.o abi.o IPAddress.o new.o Print.o Reset.o RingBuffer.o Stream.o UARTClass.o USARTClass.o CDC.o PluggableUSB.o USBCore.o wiring_pulse.o WMath.o WString.o watchdog.o variant.o MW_ArduinoHWInit.o io_wrappers.o arduinoARMScheduler.o arm_cortex_m_multitasking.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -MD -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO_SAM_DUE -DARDUINO_ARCH_SAM -D__SAM3X8E__ -mthumb -DUSB_VID=0x2341 -DUSB_PID=0x003e -DUSBCON -DUSB_MANUFACTURER=\""Unknown\"" -DUSB_PRODUCT=\""Arduino Due\"" -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_DUE_
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -MD -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO_SAM_DUE -DARDUINO_ARCH_SAM -D__SAM3X8E__ -mthumb -DUSB_VID=0x2341 -DUSB_PID=0x003e -DUSBCON -DUSB_MANUFACTURER=\""Unknown\"" -DUSB_PRODUCT=\""Arduino Due\"" -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_DUE_
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -T$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/linker_scripts/gcc/flash.ld -mcpu=cortex-m3 -mthumb -Wl,--cref -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=Reset_Handler -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols -Wl,--start-group $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/libsam_sam3x8e_gcc_rel.a

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -T$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/linker_scripts/gcc/flash.ld -mcpu=cortex-m3 -mthumb -Wl,--cref -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=Reset_Handler -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols -Wl,--start-group $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/libsam_sam3x8e_gcc_rel.a

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -T$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/linker_scripts/gcc/flash.ld -mcpu=cortex-m3 -mthumb -Wl,--cref -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=Reset_Handler -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols -Wl,--start-group $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/libsam_sam3x8e_gcc_rel.a

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -T$(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/linker_scripts/gcc/flash.ld -mcpu=cortex-m3 -mthumb -Wl,--cref -Wl,--check-sections -Wl,--gc-sections -Wl,--entry=Reset_Handler -Wl,--unresolved-symbols=report-all -Wl,--warn-common -Wl,--warn-section-align -Wl,--warn-unresolved-symbols -Wl,--start-group $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/libsam_sam3x8e_gcc_rel.a

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : build
	@echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	@echo "### Done invoking postbuild tool."


download : postbuild


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : %.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/pHSystem_ert_rtw/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : ../%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : ../%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : ../%.S
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : ../%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : ../%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : ../%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : ../%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


dtostrf.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/avr/dtostrf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


cortex_handlers.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/cortex_handlers.c
	$(CC) $(CFLAGS) -o "$@" "$<"


hooks.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/hooks.c
	$(CC) $(CFLAGS) -o "$@" "$<"


iar_calls_sam3.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/iar_calls_sam3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


itoa.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/itoa.c
	$(CC) $(CFLAGS) -o "$@" "$<"


syscalls_sam3.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/syscalls_sam3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


WInterrupts.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WInterrupts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_analog.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_analog.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_digital.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_digital.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_shift.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_shift.c
	$(CC) $(CFLAGS) -o "$@" "$<"


abi.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/abi.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


IPAddress.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/IPAddress.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


new.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/new.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Print.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Print.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Reset.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Reset.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


RingBuffer.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/RingBuffer.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Stream.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/Stream.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


UARTClass.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/UARTClass.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


USARTClass.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USARTClass.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


CDC.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/CDC.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


PluggableUSB.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/PluggableUSB.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


USBCore.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/USB/USBCore.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


wiring_pulse.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/wiring_pulse.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WMath.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WMath.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WString.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/WString.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


watchdog.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/cores/arduino/watchdog.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


variant.o : $(ARDUINO_SAM_ROOT)/hardware/sam/1.6.7/variants/arduino_due_x/variant.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_ArduinoHWInit.o : C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


io_wrappers.o : C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


arduinoARMScheduler.o : C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoARMScheduler.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


arm_cortex_m_multitasking.o : C:/ProgramData/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arm_cortex_m_multitasking.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


