OBJS	= main.o Menu.o getInt.o LinkedList.o Node.o
SOURCE	= main.cpp Menu.cpp getInt.cpp LinkedList.cpp Node.cpp
HEADER	= Menu.hpp getInt.hpp LinkedList.hpp Node.hpp
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

LinkedList.o: LinkedList.cpp
	$(CC) $(FLAGS) LinkedList.cpp

Node.o: Node.cpp
	$(CC) $(FLAGS) Node.cpp


clean:
	rm -f $(OBJS) $(OUT)