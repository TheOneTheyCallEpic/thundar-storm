#include <iostream>
#include "ppm_image.h"
#include <fstream>

unsigned char*  readPPM(const char* fileName, char* magicNum, int* ppmW, int* ppmH, int* ppmMax){ //Reads ppm image file


// char string[81];
// char stringCopy[81];

FILE* readF=fopen ("test.ppm", "r"); //Reads file
fscanf(readF, "%s", magicNum);

//Checks if file is PPM
if (strncmp(magicNum, "P6", 10) != 0 ){
	printf("Not a PPM file!")
}
else {
	printf("Not a PPM file!")

}

//Reads header

fscanf(readF, "%d\n %d\n", ppmW, ppmH);

fscanf(fr, "%d\n", maximum);

// check to see if values were stored properly

printf("PSix: %s\n", magicNum);
printf("Width: %d\n", *ppmW);
printf("Height: %d\n", *ppmH);
printf("maximum: %d\n", *ppmMax);

//int size = width * height;
int ppmSize=534900

// allocate array for pixels
 unsigned char* pixels = new unsigned char[size];

 while (fread(pixels, sizeof(int), 128, readF)) {
		printf("%s", pixels);
	} // end of for loop

	// close file
	fclose(readF);

	return pixels;
//-----------------------------------------------------------------------
// for(int i=0; string[i] !='\0'; ++i){
// 	stringCopy[i]=string[i];
// }

// printf("%s\n",stringCopy);


// fclose(fpPPM);
}



// void writePPM(){

// FILE* fpPPM =fopen("test.ppm","w"); //Opens file. "w" means writing


// }