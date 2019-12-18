OBJS	= main.o Menu.o getInt.o functions.o
SOURCE	= main.cpp Menu.cpp getInt.cpp functions.cpp
HEADER	= Menu.hpp getInt.hpp functions.hpp
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

functions.o: functions.cpp
	$(CC) $(FLAGS) functions.cpp


clean:
	rm -f $(OBJS) $(OUT)