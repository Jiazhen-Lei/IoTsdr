################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
app/ble/%.obj: ../app/ble/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1220/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/code/CCS_DEcade/IoTsdr/app" --include_path="E:/code/CCS_DEcade/IoTsdr/at86rf215" --include_path="E:/code/CCS_DEcade/IoTsdr/driverlib/MSP432P4xx" --include_path="E:/code/CCS_DEcade/IoTsdr/flash" --include_path="E:/code/CCS_DEcade/IoTsdr/fpga" --include_path="E:/code/CCS_DEcade/IoTsdr/mcp9808" --include_path="E:/code/CCS_DEcade/IoTsdr/sx1276" --include_path="E:/code/CCS_DEcade/IoTsdr/system" --include_path="E:/code/CCS_DEcade/IoTsdr/utils" --include_path="C:/ti/ccs1220/ccs/ccs_base/arm/include" --include_path="C:/ti/ccs1220/ccs/ccs_base/arm/include/CMSIS" --include_path="E:/code/CCS_DEcade/IoTsdr" --include_path="C:/ti/ccs1220/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --advice:power="all" --define=__MSP432P401R__ --define=ccs -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="app/ble/$(basename $(<F)).d_raw" --obj_directory="app/ble" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


