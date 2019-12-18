OBJS	= main.o Menu.o getInt.o buffer.o palindrome.o
SOURCE	= main.cpp Menu.cpp getInt.cpp buffer.cpp palindrome.cpp
HEADER	= Menu.hpp getInt.hpp buffer.hpp palindrome.hpp
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

buffer.o: buffer.cpp
	$(CC) $(FLAGS) buffer.cpp

palindrome.o: palindrome.cpp
	$(CC) $(FLAGS) palindrome.cpp


clean:
	rm -f $(OBJS) $(OUT)