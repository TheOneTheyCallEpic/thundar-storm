#include <cstdio>
#include "ppm_jpeg.h"
#include <fstream>
#include <cstring> 
#include "ppm_read.h"
#include "ppm_write.h"

void jpegConvert(int* ppmW, int* ppmH, unsigned char* pixels){

FILE* readJPEG =fopen("test.ppm","w"); //Opens file. "wb" to write the pixels 

int ppmSize = *ppmW * *ppmH * 3; //Gets the total number of pixels

int* image_width = ppmW; 	/* image width and height, in pixels */
int* image_height = ppmH;
int input_components = 3;		/* # of color components per pixel */

//fwrite(pixels,sizeof(unsigned char),readJPEG);


fclose(readJPEG); //Closes file
 }