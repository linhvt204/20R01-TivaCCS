################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-700381041:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-700381041-inproc

build-700381041-inproc: ../TM4c123x.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs901/ccs/utils/sysconfig/sysconfig_cli.bat" -o "syscfg" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/pinout.c: build-700381041 ../TM4c123x.syscfg
syscfg/pinout.h: build-700381041
syscfg/summary.csv: build-700381041
syscfg/: build-700381041

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/20P01_0DefaultPrj" --include_path="C:/ti/TivaWare_C_Series-2.1.4.178" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/user_init" --include_path="C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --advice:power="4" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/20P01_0DefaultPrj/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/20P01_0DefaultPrj" --include_path="C:/ti/TivaWare_C_Series-2.1.4.178" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/user_init" --include_path="C:/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --advice:power="4" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="E:/vu.t.linh204.work GD/Lop Anh Tuan/Microcontroller/Code Composer Studio/Board tm4c/20P01_0DefaultPrj/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


