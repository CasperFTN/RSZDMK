################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Vezbe6_zadatak4.lss \

FLASH_IMAGE += \
Vezbe6_zadatak4.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Vezbe6_zadatak4.elf secondary-outputs

# Tool invocations
Vezbe6_zadatak4.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Vezbe6_zadatak4.map -mmcu=atmega328p -o "Vezbe6_zadatak4.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Vezbe6_zadatak4.lss: Vezbe6_zadatak4.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Vezbe6_zadatak4.elf  >"Vezbe6_zadatak4.lss"
	@echo 'Finished building: $@'
	@echo ' '

Vezbe6_zadatak4.hex: Vezbe6_zadatak4.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Vezbe6_zadatak4.elf  "Vezbe6_zadatak4.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Vezbe6_zadatak4.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Vezbe6_zadatak4.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Vezbe6_zadatak4.elf
	@echo 'Invoking: AVRDude'
	D:\ENGINEER\WinAVR\bin\avrdude -pm328p -carduino -PCOM6 -Uflash:w:Vezbe6_zadatak4.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Vezbe6_zadatak4.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
