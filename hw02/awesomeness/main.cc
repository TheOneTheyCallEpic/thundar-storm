#include <iostream>
#include "awesomeness.h"


int main(){
	int awesome=rand() % 10;
	printf ("How awesome are you?");
	awesomeness(awesome);

	return 0;
}