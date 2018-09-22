all : main

program_run.o: program_run.cc program_run.h
	g++ -c program_run.cc

main.o: main.cc program_run.h
	g++ -c main.cc

main: main.o program_run.o
	g++ -o main main.o program_run.o