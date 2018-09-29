#include <iostream>
#include "ppm_read.h"
#include "ppm_write.h"
#include <fstream>


int main(){
	char fileName[50] = "test.ppm";
	char magicNum[10];
	int ppmW = 0;
	int ppmH = 0;
	int ppmMax = 0;
	//int ppmSize = 128;

	unsigned char* pArray = readPPM(fileName, magicNum, &ppmW, &ppmH, &ppmMax);

	writePPM(magicNum, &ppmW, &ppmH, &ppmMax, pArray);

}//End of main.