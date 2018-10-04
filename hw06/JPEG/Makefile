all : main

ppm_read.o: ppm_read.cc ppm_read.h
	g++ -c ppm_read.cc

ppm_write.o: ppm_write.cc ppm_write.h
	g++ -c ppm_write.cc	

ppm_jpeg.o: ppm_jpeg.cc ppm_jpeg.h
	g++ -c ppm_jpeg.cc

main.o: main.cc ppm_read.h 
	g++ -c main.cc

main: main.o ppm_write.o ppm_read.o ppm_jpeg.o
	g++ -o main main.o ppm_write.o ppm_read.o ppm_jpeg.o