#include <cstdio>

int main() {
	int array[10][10];

	for (int i = 0; i < 100; i++) {
		array[i / 10][i % 10] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			printf("%d ", array[i][k]);
		}
		printf("\n");
	}

	return 0;
}

