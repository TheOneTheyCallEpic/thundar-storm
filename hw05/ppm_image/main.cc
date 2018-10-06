#include <cstdio>
#include "ppm_read.h"
#include "ppm_write.h"
#include "ppm_jpeg.h"
#include <fstream>
#include <cstring> 


int main(){
	char fileName[50] = "test.ppm";
	char magicNum[10];
	int ppmW = 0;
	int ppmH = 0;
	int ppmMax = 0;

	unsigned char* pArray = readPPM(fileName, magicNum, &ppmW, &ppmH, &ppmMax);

}//End of main.