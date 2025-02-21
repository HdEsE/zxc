#include <cstdio>

int main() {
	int array[10][10];

	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			array[i][k] = 10 * i + (k + 1);
			printf("%d ", array[i][k]);
		}
		printf("\n");
	}

	return 0;
}

