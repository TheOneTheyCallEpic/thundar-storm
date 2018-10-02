#include <iostream>
#include "ppm_read.h"
#include <fstream>
#include <cstring> 

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
int ppmSize = *ppmW * *ppmH * 3; //multiply ppmW and ppmH with 3

// allocate array for pixels. Creates an array of pointers pointing to a char.
unsigned char* pixels = new unsigned char[ppmSize];

fread(pixels, sizeof(unsigned char), ppmSize, readF);

//Allocate array of pointers
int** array = new int * [*ppmH];

//Allocate flat array (2D Array)
*array = new int [*ppmW**ppmH];

//Sets pointer to start of each row 
for(int i=1;i<*ppmH;++i){
	array [ i ] = array [ i - 1 ] + *ppmW;
}

//Goes through each row in the 2D array (Outer for loop)
for(int row=0;row<*ppmH; ++row){

	//Goes through each element in the 2D array (Outer for loop)
	for(int element=0;element<*ppmW;++element){
		unsigned char* bytes = (unsigned char*)&array[*ppmH][*ppmW];

	}
}
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