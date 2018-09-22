#include <iostream>
#include "ppm_image.h"
#include <fstream>

void readPPM(){ //Reads ppm image file

char string[81];
char stringCopy[81];

FILE* fpPPM=fopen ("test.ppm", "r");
fscanf(fpPPM, "%s", string);

for(int i=0; string[i] !='\0'; ++i){
	stringCopy[i]=string[i];
}

printf("%s\n",stringCopy);


fclose(fpPPM);
}



// void writePPM(){

// FILE* fpPPM =fopen("test.ppm","w"); //Opens file. "w" means writing


// }