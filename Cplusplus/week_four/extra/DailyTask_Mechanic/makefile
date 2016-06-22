# the compiler to use
CC = g++

# Compiler flags:
# -c compile the source files without linking
# -g adds debugging information to the executable
# -Wall turns on most, but not all, compiler warnings
# -std=c++11 compiles in c++11 compatible mode
CFLAGS = -c -g -Wall -std=c++11

# Sources
SOURCES = main.cpp car.cpp mechanic.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# build target executable
TARGET = main

all: main

main: main.o car.o mechanic.o man.o
	$(CC) main.o man.o car.o mechanic.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

car.o: car.cpp
	$(CC) $(CFLAGS) car.cpp

mechanic.o: mechanic.cpp
	$(CC) $(CFLAGS) mechanic.cpp

man.o: man.cpp
	$(CC) $(CFLAGS) man.cpp

clean:
	rm -f *o main
