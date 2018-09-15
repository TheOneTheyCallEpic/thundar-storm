#include <cstdlib>
#include <iostream>
#include <fstream>
#include <"program_run.h">

using namespace std;

int main(int argc, char** argv) {

    FILE* fp = fopen(“filename”, “r”);
int value;
while(fscanf(fp, “%d”, value) != EOF) {
printf(“%d\n”, value); }
fclose(fp);
    return 0;
}

