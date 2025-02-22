#include "header.h"

int main() {

	int v1;
	int v2;
	int result;

	int* pv1 = &v1;
	int* pv2 = &v2;
	int* presult = &result;
	
	*pv1 = getint();
	*pv2 = getint();
	*presult = *pv1 + *pv2;

	printf("%d + %d = %d", v1, v2, result);

	return 0;
}

int getint() {
	int input;
	printf("Enter: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}
