################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./syscfg/pinout.obj" \
"./main.obj" \
"./tm4c123gh6pm_startup_ccs.obj" \
"./user_init/InitADC.obj" \
"./user_init/InitFPU.obj" \
"./user_init/InitGPIO.obj" \
"./user_init/InitI2C.obj" \
"./user_init/InitLED.obj" \
"./user_init/InitPWM.obj" \
"./user_init/InitSSI.obj" \
"./user_init/InitSysCtl.obj" \
"./user_init/InitSysTick.obj" \
"./user_init/InitTimer.obj" \
"./user_init/InitUART.obj" \
"./user_init/InitWTimer.obj" \
"./user_init/delay.obj" \
"./user_init/uartstdio.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \
-l"C:/ti/TivaWare_C_Series-2.1.4.178/driverlib/ccs/Debug/driverlib.lib" \
-l"C:/ti/TivaWare_C_Series-2.1.4.178/grlib/ccs/Debug/grlib.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include user_init/subdir_vars.mk
-include subdir_rules.mk
-include user_init/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
20P09_WTIMER.out \

EXE_OUTPUTS__QUOTED += \
"20P09_WTIMER.out" \

BIN_OUTPUTS += \
20P09_WTIMER.txt \

BIN_OUTPUTS__QUOTED += \
"20P09_WTIMER.txt" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "20P09_WTIMER.out" secondary-outputs

# Tool invocations
20P09_WTIMER.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --advice:power="4" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"20P09_WTIMER.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/lib" -i"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="20P09_WTIMER_linkInfo.xml" --rom_model -o "20P09_WTIMER.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

20P09_WTIMER.txt: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armhex" --ti_txt -o "20P09_WTIMER.txt" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "syscfg\pinout.obj" "main.obj" "tm4c123gh6pm_startup_ccs.obj" "user_init\InitADC.obj" "user_init\InitFPU.obj" "user_init\InitGPIO.obj" "user_init\InitI2C.obj" "user_init\InitLED.obj" "user_init\InitPWM.obj" "user_init\InitSSI.obj" "user_init\InitSysCtl.obj" "user_init\InitSysTick.obj" "user_init\InitTimer.obj" "user_init\InitUART.obj" "user_init\InitWTimer.obj" "user_init\delay.obj" "user_init\uartstdio.obj" 
	-$(RM) "syscfg\pinout.d" "main.d" "tm4c123gh6pm_startup_ccs.d" "user_init\InitADC.d" "user_init\InitFPU.d" "user_init\InitGPIO.d" "user_init\InitI2C.d" "user_init\InitLED.d" "user_init\InitPWM.d" "user_init\InitSSI.d" "user_init\InitSysCtl.d" "user_init\InitSysTick.d" "user_init\InitTimer.d" "user_init\InitUART.d" "user_init\InitWTimer.d" "user_init\delay.d" "user_init\uartstdio.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-"C:/ti/ccs901/ccs/utils/tiobj2bin/tiobj2bin.bat" "20P09_WTIMER.out" "20P09_WTIMER.bin" "C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armofd.exe" "C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armhex.exe" "C:/ti/ccs901/ccs/utils/tiobj2bin/mkhex4bin.exe"
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

