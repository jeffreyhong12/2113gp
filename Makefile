FLAGS = -pedantic-errors -std=c++11

character_v1.3.o: character_v1.3.cpp
	g++ $(FLAGS) -c $<

battle.o: battle.cpp character_v1.3.cpp battle.h
	g++ $(FLAGS) -c $<

main.o: main.cpp battle.h
	g++ $(FLAGS) -c $<

main: main.o battle.o character_v1.3.o
	g++ $(FLAGS) $^ -o $@
