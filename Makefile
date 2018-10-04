# FIle: Makefile
# Author: Trey Howell
# Description: this is the make file for the vector class

# Compiler Version
   CC=g++
# Target
TARGET=list

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax
# target: dependencies
#(tab) system command(s)

all: $(TARGET)

$ (TARGET): Main.o Vector.o
	$(CC) Main.o Vector.o -o $(TARGET)
Main.o: Main.cpp Vector.h
	$(CC) $(CFLAGS) Main.cpp
Vector.o: Vector.cpp Vector.h
	 $(CC) $(CFLAGS)Vector.cpp
clean:
	rm * .o *~ $(TARGET)
