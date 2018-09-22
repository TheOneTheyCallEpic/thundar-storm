all : main

ppm_image.o: ppm_image.cc ppm_image.h
	g++ -c ppm_image.cc

main.o: main.cc ppm_image.h
	g++ -c main.cc

main: main.o ppm_image.o
	g++ -o main main.o ppm_image.o