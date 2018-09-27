all : main

ppm_read.o: ppm_read.cc ppm_read.h
	g++ -c ppm_read.cc

ppm_write.o: ppm_write.cc ppm_write.h
	g++ -c ppm_write.cc	

main.o: main.cc ppm_read.h 
	g++ -c main.cc

main: main.o ppm_write.o ppm_read.o
	g++ -o main main.o ppm_write.o ppm_read.o