OBJS	= main.o getInt.o Menu.o Queue.o
SOURCE	= main.cpp getInt.cpp Menu.cpp Queue.cpp
HEADER	= getInt.hpp Menu.hpp Queue.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -std=c++11
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

getInt.o: getInt.cpp
	$(CC) $(FLAGS) getInt.cpp

Menu.o: Menu.cpp
	$(CC) $(FLAGS) Menu.cpp

Queue.o: Queue.cpp
	$(CC) $(FLAGS) Queue.cpp


clean:
	rm -f $(OBJS) $(OUT)