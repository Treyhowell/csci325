#complier Version
CC=g++

#debugging flag g-
DEBUG=-g

#target
TARGET=Variance

#compile with all errors and warnings
CFLAGS= -c -Wall $(Debug)

all: $(TARGET)

$(TARGET): Variance.o
	$(CC) Variance.o -o $(TARGET)
Variance.o: Variance.cpp
	$(CC) Variance.cpp $(CFLAGS)
clean:
	rm *.o *~ $(TARGET)
