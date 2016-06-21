# the compiler to use
CC = g++

# Compiler flags:
# -c compile the source files without linking
# -g adds debugging information to the executable
# -Wall turns on most, but not all, compiler warnings
# -std=c++11 compiles in c++11 compatible mode
CFLAGS = -c -g -Wall -std=c++11

# Sources
SOURCES = main.cpp Car.cpp Mechanic.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# build target executable
TARGET = main.exe

all: $(SOURCES) $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -O $@

.cpp.o:
	$(CC) $(CFLAGS) $< -O $@


