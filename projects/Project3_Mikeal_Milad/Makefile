OBJS	= main.o Menu.o getInt.o Character.o Vampire.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o
SOURCE	= main.cpp Menu.cpp getInt.cpp Character.cpp Vampire.cpp Barbarian.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp
HEADER	= Menu.hpp getInt.hpp Character.hpp Vampire.hpp Barbarian.hpp BlueMen.hpp Medusa.hpp HarryPotter.hpp
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

Character.o: Character.cpp
	$(CC) $(FLAGS) Character.cpp

Vampire.o: Vampire.cpp
	$(CC) $(FLAGS) Vampire.cpp

Barbarian.o: Barbarian.cpp
	$(CC) $(FLAGS) Barbarian.cpp

BlueMen.o: BlueMen.cpp
	$(CC) $(FLAGS) BlueMen.cpp

Medusa.o: Medusa.cpp
	$(CC) $(FLAGS) Medusa.cpp

HarryPotter.o: HarryPotter.cpp
	$(CC) $(FLAGS) HarryPotter.cpp


clean:
	rm -f $(OBJS) $(OUT)