#include "header.h"

int main() {

	int myValue = 50;
	int* myValueaddress;

	myValueaddress = &myValue;
	
	*myValueaddress = 200;

	printf("%d", myValue);

	return 0;
}