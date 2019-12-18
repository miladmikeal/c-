OBJS	= main.o count_letters.o output_letters.o
SOURCE	= main.cpp count_letters.cpp output_letters.cpp
HEADER	= count_letters.hpp output_letters.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -std=c++11
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

count_letters.o: count_letters.cpp
	$(CC) $(FLAGS) count_letters.cpp

output_letters.o: output_letters.cpp
	$(CC) $(FLAGS) output_letters.cpp


clean:
	rm -f $(OBJS) $(OUT)