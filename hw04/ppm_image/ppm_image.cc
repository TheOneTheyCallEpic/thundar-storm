#include <iostream>
#include "ppm_image.h"
#include <fstream>

unsigned char*  readPPM(const char* fileName, char* magicNum, int* ppmW, int* ppmH, int* ppmMax){ //Reads ppm image file


// char string[81];
// char stringCopy[81];

FILE* readF=fopen ("test.ppm", "r"); //Reads file
fscanf(readF, "%s", magicNum);

//Checks if file is PPM format
if (strncmp(magicNum, "P6", 10) != 0 ){
	printf("Not a PPM file!");
}


//Reads header file

fscanf(readF, "%d %d\n", ppmW, ppmH); 


fscanf(readF, "%d\n", ppmMax);

// check to see if values were stored properly

printf("%s\n", magicNum);

//Prints out width and height of PPM file
printf("%d %d\n", *ppmW, *ppmH);

//Prints out maximum number of pixles in PPM file
printf("%d\n", *ppmMax);

//int size = width * height;
//In this case: 250 * 252=423800
int ppmSize=423800; //Need to find a way to multiply ppmW and ppmH with 3

// allocate array for pixels
unsigned char* pixels = new unsigned char[ppmSize];

//-----------------------------------------------------------------------



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



void writePPM(char* magicNum, int* ppmW, int* ppmH, int* ppmMax, unsigned char* pixels){

FILE* writeF =fopen("result.ppm","wb"); //Opens file. "wb" to write the pixels 

int totalPixels = *ppmW * *ppmH * 3; //Total pixels

fprintf(writeF, "%s\n%d %d\n%d", magicNum, *ppmW, *ppmH, *ppmMax); //Header

fwrite(pixels, sizeof(unsigned char), totalPixels, writeF);

fclose(writeF);
 }