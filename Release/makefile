################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
marko_squared.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
marko_squared.list \

OBJCOPY_HEX += \
marko_squared.hex \


# All Target
all: marko_squared.elf secondary-outputs

# Tool invocations
marko_squared.elf: $(OBJS) $(USER_OBJS) /home/marko/Documents/embedded_workspace/marko_squared/STM32F415RGTX_FLASH.ld
	arm-none-eabi-gcc -o "marko_squared.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/marko/Documents/embedded_workspace/marko_squared/STM32F415RGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="marko_squared.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

marko_squared.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "marko_squared.list"
	@echo 'Finished building: $@'
	@echo ' '

marko_squared.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "marko_squared.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
