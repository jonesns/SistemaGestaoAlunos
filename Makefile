# Name of the project
PROJ_NAME=prog

# .c files
C_SOURCE=$(wildcard ./src/*.c)

# .h files
H_SOURCE=$(wildcard ./include/*.h)
#HEADERS = $(wildcard /include/*.h)

# Object files
OBJECTS=$(subst .c,.o,$(subst src,objects,$(C_SOURCE)))
#OBJECTS=$(C_SOURCE:.c=.o)
#OBJECTS = $(patsubst %.c, %.o, $(wildcard src/*.c))

LIBS = -lm
# Compiler
CC=gcc
# Flags for compiler
CC_FLAGS=-c			\
		 -std=c99	\
		 -W         \
         -Wall      \
         -ansi      \
         -pedantic

# Command used at clean target
RM = rm -rvf

#
# Compilation and linking
#
default: objFolder $(PROJ_NAME)
all: default

$(PROJ_NAME): $(OBJECTS)
	@ echo 'Building binary using GCC linker: $@'
	$(CC) -o $@ $^
	@ echo 'Finished building binary: $@'
	@ echo ' '

./objects/%.o: ./src/%.c ./include/%.h
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@ 
	@ echo ' '

./objects/main.o: ./src/main.c $(H_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p objects
	
clean:
	@ $(RM) ./objects/*.o ./src/*.o $(PROJ_NAME) *~
	@ rmdir objects
#@rm -rvf obj/*.o $(PROJ_NAME)

run:
	@./prog

.PHONY: default all clean run