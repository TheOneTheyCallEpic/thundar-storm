#include <iostream>
#include "ppm_jpeg.h"
#include <fstream>
#include <cstring> 
#include "ppm_read.h"


void jpegConvert(int* ppmW, int* ppmH, int* ppmMax, unsigned char* pixels){

FILE* writeF =fopen("result.ppm","wb"); //Opens file. "wb" to write the pixels 



fclose(writeF); //Closes file
 }