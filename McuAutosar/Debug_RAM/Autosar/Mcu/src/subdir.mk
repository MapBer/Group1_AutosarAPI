################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Autosar/Mcu/src/Mcu.c 

OBJS += \
./Autosar/Mcu/src/Mcu.o 

C_DEPS += \
./Autosar/Mcu/src/Mcu.d 


# Each subdirectory must supply rules for building sources it contributes
Autosar/Mcu/src/%.o: ../Autosar/Mcu/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Autosar/Mcu/src/Mcu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


