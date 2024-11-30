# Makefile for the rush project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I.

# Source files
SRC = src/main.c \
      src/library.c \
      src/validity.c \
      src/word_converting.c \
      src/dictionary.c

# Object files
OBJ = $(SRC:.c=.o)

# Executable name
EXEC = rush

# Default target
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove object files and the executable
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean
