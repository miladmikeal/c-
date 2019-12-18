OBJS	= main.o Menu.o getInt.o University.o Building.o Person.o Student.o Instructor.o
SOURCE	= main.cpp Menu.cpp getInt.cpp University.cpp Building.cpp Person.cpp Student.cpp Instructor.cpp
HEADER	= Menu.hpp getInt.hpp University.hpp Building.hpp Person.hpp Student.hpp Instructor.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -std=c++11
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Menu.o: Menu.cpp
	$(CC) $(FLAGS) Menu.cpp

getInt.o: getInt.cpp
	$(CC) $(FLAGS) getInt.cpp

University.o: University.cpp
	$(CC) $(FLAGS) University.cpp

Building.o: Building.cpp
	$(CC) $(FLAGS) Building.cpp

Person.o: Person.cpp
	$(CC) $(FLAGS) Person.cpp

Student.o: Student.cpp
	$(CC) $(FLAGS) Student.cpp

Instructor.o: Instructor.cpp
	$(CC) $(FLAGS) Instructor.cpp


clean:
	rm -f $(OBJS) $(OUT)