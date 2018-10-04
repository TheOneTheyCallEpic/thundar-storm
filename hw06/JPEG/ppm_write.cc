#include <iostream>
#include "ppm_write.h"
#include <fstream>
#include <cstring> 

void writePPM(char* magicNum, int* ppmW, int* ppmH, int* ppmMax, unsigned char* pixels){

FILE* writeF =fopen("result.ppm","wb"); //Opens file. "wb" to write the pixels 

int totalPixels = *ppmW * *ppmH * 3; //Total pixels

fprintf(writeF, "%s\n%d %d\n%d\n", magicNum, *ppmW, *ppmH, *ppmMax); //Header

fwrite(pixels, sizeof(unsigned char), totalPixels, writeF);

fclose(writeF); //Closes file
 }