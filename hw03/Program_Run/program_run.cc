#include <iostream>
#include <"program_run.h">
#include <fstream>


int program_run(int n){

FILE* fp = fopen("numfile.txt", “r”); //Opens file
EOF=false;
int n;

while(fscanf(fp, “%d”, value) != EOF) {

printf(“%d\n”, value); }
fclose(fp);

return 0;

}