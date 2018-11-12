all: main

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc
Fish.o: Fish.cc Fish.h
	g++ -c Fish.cc
Population.o: Population.cc Population.h
	g++ -c Population.cc
main.o: main.cc Angle.h Fish.h Population.h
	g++ -c main.cc
main: main.o Angle.o
	g++ -o main main.o Angle.o 
