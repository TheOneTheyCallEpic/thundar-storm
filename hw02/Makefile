all : main

awesomeness.o: awesomeness.cc awesomeness.h
	g++ -c awesomeness.cc

main.o: main.cc awesomeness.h
	g++ -c main.cc

main: main.o awesomeness.o
	g++ -o main main.o awesomeness.o