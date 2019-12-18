OBJS    = main.o menu.o Ant.o toRandomize.o userInputs.o userInputs2.o runAgain.o
SOURCE    = main.cpp menu.cpp Ant.cpp toRandomize.cpp userInputs.cpp userInputs2.cpp runAgain.cpp
HEADER    = menu.hpp Ant.hpp toRandomize.hpp userInputs.hpp userInputs2.hpp runAgain.hpp
OUT    = main
CC     = g++
FLAGS     = -g -c -Wall
LFLAGS     =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

menu.o: menu.cpp
	$(CC) $(FLAGS) menu.cpp

Ant.o: Ant.cpp
	$(CC) $(FLAGS) Ant.cpp

toRandomize.o: toRandomize.cpp
	$(CC) $(FLAGS) toRandomize.cpp

userInputs.o: userInputs.cpp
	$(CC) $(FLAGS) userInputs.cpp

userInputs2.o: userInputs2.cpp
	$(CC) $(FLAGS) userInputs2.cpp

runAgain.o: runAgain.cpp
	$(CC) $(FLAGS) runAgain.cpp


clean:
	rm -f $(OBJS) $(OUT)
