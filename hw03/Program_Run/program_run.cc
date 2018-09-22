#include <cstdio>
#include "program_run.h"



int program_run(){

FILE* file = fopen("numfile.txt", "r"); //Opens file
int n=0;

while(fscanf(file, "%d" , &n) != EOF) {

printf("%d" , n); 
}

fclose(file);

n+=1;
FILE* file2 = fopen("numfile.txt", "w"); //Writes file
fprintf(file2, "%d", n);

fclose(file2);

return 0;

}