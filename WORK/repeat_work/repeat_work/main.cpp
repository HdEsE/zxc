#include <cstdio>

int main() {

	int input;
	printf("Enter number: ");

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		for (int k = 0; k < input - i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}