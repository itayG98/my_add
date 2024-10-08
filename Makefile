# -*- MakeFile -*-

# Compiler
CC = gcc

# Executable name
TARGET = my_add

# Source files
SRCS = my_add.c

# Object files
OBJS = $(SRCS:.c=.o)

# Compilation flags
CFLAGS = -Wall -ansi -pedantic # -Wno-uninitialized

# Debug flags
DEBUG_FLAGS = -g

# Default target
all: $(TARGET)

# Debug target
debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(TARGET)

# Linking the object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	del /q $(OBJS) $(TARGET).exe

.PHONY: clean all
