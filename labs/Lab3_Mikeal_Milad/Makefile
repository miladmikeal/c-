OBJS	= main.o Game.o Die.o LoadedDie.o Menu.o getInt.o
SOURCE	= main.cpp Game.cpp Die.cpp LoadedDie.cpp Menu.cpp getInt.cpp
HEADER	= Game.hpp Die.hpp LoadedDie.hpp Menu.hpp getInt.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -std=c++11
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Game.o: Game.cpp
	$(CC) $(FLAGS) Game.cpp

Die.o: Die.cpp
	$(CC) $(FLAGS) Die.cpp

LoadedDie.o: LoadedDie.cpp
	$(CC) $(FLAGS) LoadedDie.cpp

Menu.o: Menu.cpp
	$(CC) $(FLAGS) Menu.cpp

getInt.o: getInt.cpp
	$(CC) $(FLAGS) getInt.cpp


clean:
	rm -f $(OBJS) $(OUT)