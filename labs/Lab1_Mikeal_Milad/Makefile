OBJS	= main.o readMatrix.o determinant.o
SOURCE	= main.cpp readMatrix.cpp determinant.cpp
HEADER	= readMatrix.hpp determinant.hpp
OUT	= matrixCalculator
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

readMatrix.o: readMatrix.cpp
	$(CC) $(FLAGS) readMatrix.cpp

determinant.o: determinant.cpp
	$(CC) $(FLAGS) determinant.cpp


clean:
	rm -f $(OBJS) $(OUT)