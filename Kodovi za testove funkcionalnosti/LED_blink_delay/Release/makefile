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
LED_blink_delay.lss \

FLASH_IMAGE += \
LED_blink_delay.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: LED_blink_delay.elf secondary-outputs

# Tool invocations
LED_blink_delay.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LED_blink_delay.map -mmcu=atmega328p -o "LED_blink_delay.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LED_blink_delay.lss: LED_blink_delay.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LED_blink_delay.elf  >"LED_blink_delay.lss"
	@echo 'Finished building: $@'
	@echo ' '

LED_blink_delay.hex: LED_blink_delay.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LED_blink_delay.elf  "LED_blink_delay.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LED_blink_delay.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p LED_blink_delay.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: LED_blink_delay.elf
	@echo 'Invoking: AVRDude'
	D:\ENGINEER\WinAVR\bin\avrdude -pm328p -carduino -PCOM6 -Uflash:w:LED_blink_delay.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LED_blink_delay.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
