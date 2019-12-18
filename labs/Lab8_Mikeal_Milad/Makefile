OBJS	= main.o getInt.o readValues.o simpleSearch.o sort.o binarySearch.o
SOURCE	= main.cpp getInt.cpp readValues.cpp simpleSearch.cpp sort.cpp binarySearch.cpp
HEADER	= getInt.hpp readValues.hpp simpleSearch.hpp sort.hpp binarySearch.hpp
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

readValues.o: readValues.cpp
	$(CC) $(FLAGS) readValues.cpp

simpleSearch.o: simpleSearch.cpp
	$(CC) $(FLAGS) simpleSearch.cpp

sort.o: sort.cpp
	$(CC) $(FLAGS) sort.cpp

binarySearch.o: binarySearch.cpp
	$(CC) $(FLAGS) binarySearch.cpp


clean:
	rm -f $(OBJS) $(OUT)