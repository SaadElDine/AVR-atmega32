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

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../9.2_CONNECTED_SEVENSEG_0-100.c \
../DIO_Prog.c \
../SEVEN_SEG_Prog.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
9.2_CONNECTED_SEVENSEG_0-100.o \
DIO_Prog.o \
SEVEN_SEG_Prog.o


OBJS_AS_ARGS +=  \
9.2_CONNECTED_SEVENSEG_0-100.o \
DIO_Prog.o \
SEVEN_SEG_Prog.o


C_DEPS +=  \
9.2_CONNECTED_SEVENSEG_0-100.d \
DIO_Prog.d \
SEVEN_SEG_Prog.d


C_DEPS_AS_ARGS +=  \
9.2_CONNECTED_SEVENSEG_0-100.d \
DIO_Prog.d \
SEVEN_SEG_Prog.d


OUTPUT_FILE_PATH +=9.2_CONNECTED_SEVENSEG_0-100.elf

OUTPUT_FILE_PATH_AS_ARGS +=9.2_CONNECTED_SEVENSEG_0-100.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler







./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega32   -o"$@" "$<" 
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

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="9.2_CONNECTED_SEVENSEG_0-100.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group  -mmcu=atmega32  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "9.2_CONNECTED_SEVENSEG_0-100.elf" "9.2_CONNECTED_SEVENSEG_0-100.hex"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "9.2_CONNECTED_SEVENSEG_0-100.elf" "9.2_CONNECTED_SEVENSEG_0-100.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objdump.exe" -h -S "9.2_CONNECTED_SEVENSEG_0-100.elf" > "9.2_CONNECTED_SEVENSEG_0-100.lss"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "9.2_CONNECTED_SEVENSEG_0-100.elf" "9.2_CONNECTED_SEVENSEG_0-100.srec"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-size.exe" "9.2_CONNECTED_SEVENSEG_0-100.elf"
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "9.2_CONNECTED_SEVENSEG_0-100.elf" "9.2_CONNECTED_SEVENSEG_0-100.a" "9.2_CONNECTED_SEVENSEG_0-100.hex" "9.2_CONNECTED_SEVENSEG_0-100.lss" "9.2_CONNECTED_SEVENSEG_0-100.eep" "9.2_CONNECTED_SEVENSEG_0-100.map" "9.2_CONNECTED_SEVENSEG_0-100.srec"
	