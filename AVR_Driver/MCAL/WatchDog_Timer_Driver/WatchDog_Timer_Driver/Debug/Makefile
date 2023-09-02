################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../DIO_Prog.c \
../WatchDogT_Interface.c \
../WatchDog_Timer_Driver.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
DIO_Prog.o \
WatchDogT_Interface.o \
WatchDog_Timer_Driver.o

OBJS_AS_ARGS +=  \
DIO_Prog.o \
WatchDogT_Interface.o \
WatchDog_Timer_Driver.o

C_DEPS +=  \
DIO_Prog.d \
WatchDogT_Interface.d \
WatchDog_Timer_Driver.d

C_DEPS_AS_ARGS +=  \
DIO_Prog.d \
WatchDogT_Interface.d \
WatchDog_Timer_Driver.d

OUTPUT_FILE_PATH +=WatchDog_Timer_Driver.elf

OUTPUT_FILE_PATH_AS_ARGS +=WatchDog_Timer_Driver.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
./DIO_Prog.o: .././DIO_Prog.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -I"F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./WatchDogT_Interface.o: .././WatchDogT_Interface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -I"F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./WatchDog_Timer_Driver.o: .././WatchDog_Timer_Driver.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -I"F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="WatchDog_Timer_Driver.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32 -B "F:\New folder\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32"  
	@echo Finished building target: $@
	"F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "WatchDog_Timer_Driver.elf" "WatchDog_Timer_Driver.hex"
	"F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "WatchDog_Timer_Driver.elf" "WatchDog_Timer_Driver.eep" || exit 0
	"F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "WatchDog_Timer_Driver.elf" > "WatchDog_Timer_Driver.lss"
	"F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "WatchDog_Timer_Driver.elf" "WatchDog_Timer_Driver.srec"
	"F:\New folder\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "WatchDog_Timer_Driver.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "WatchDog_Timer_Driver.elf" "WatchDog_Timer_Driver.a" "WatchDog_Timer_Driver.hex" "WatchDog_Timer_Driver.lss" "WatchDog_Timer_Driver.eep" "WatchDog_Timer_Driver.map" "WatchDog_Timer_Driver.srec" "WatchDog_Timer_Driver.usersignatures"
	