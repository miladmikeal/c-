OBJS	= main.o Zoo.o Animal.o Tiger.o Penguin.o Turtle.o Gorilla.o Menu.o getInt.o
SOURCE	= main.cpp Zoo.cpp Animal.cpp Tiger.cpp Penguin.cpp Turtle.cpp Gorilla.cpp Menu.cpp getInt.cpp
HEADER	= Zoo.hpp Animal.hpp Tiger.hpp Penguin.hpp Turtle.hpp Gorilla.hpp Menu.hpp getInt.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -std=c++11
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Zoo.o: Zoo.cpp
	$(CC) $(FLAGS) Zoo.cpp

Animal.o: Animal.cpp
	$(CC) $(FLAGS) Animal.cpp

Tiger.o: Tiger.cpp
	$(CC) $(FLAGS) Tiger.cpp

Penguin.o: Penguin.cpp
	$(CC) $(FLAGS) Penguin.cpp

Turtle.o: Turtle.cpp
	$(CC) $(FLAGS) Turtle.cpp

Gorilla.o: Gorilla.cpp
	$(CC) $(FLAGS) Gorilla.cpp

Menu.o: Menu.cpp
	$(CC) $(FLAGS) Menu.cpp

getInt.o: getInt.cpp
	$(CC) $(FLAGS) getInt.cpp


clean:
	rm -f $(OBJS) $(OUT)