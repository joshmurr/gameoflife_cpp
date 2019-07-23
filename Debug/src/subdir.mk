################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/game.cpp \
../src/main.cpp \
../src/particle.cpp \
../src/screen.cpp 

OBJS += \
./src/game.o \
./src/main.o \
./src/particle.o \
./src/screen.o 

CPP_DEPS += \
./src/game.d \
./src/main.d \
./src/particle.d \
./src/screen.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/opt/local/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


