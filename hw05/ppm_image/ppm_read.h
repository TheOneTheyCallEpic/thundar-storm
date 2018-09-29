#ifndef PPM_READ_H
#define PPM_READ_H

//Declarations of functions

unsigned char*  readPPM(const char* fileName, char* magicNum, int* ppmW, int* ppmH, int* ppmMax);

#endif