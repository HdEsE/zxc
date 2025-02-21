#include <cstdio>

int main() {
	int array1[5][5];
	int array2[5][5];
	int array3[5][5];

	for (int i = 0; i < 25; i++) {
		array1[i / 5][i % 5] = i + 1;
		array2[i / 5][i % 5] = 2 * (i + 1);
		array3[i / 5][i % 5] = array1[i / 5][i % 5] + array2[i / 5][i % 5];
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d ", array1[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d ", array2[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d ", array3[i][k]);
		}
		printf("\n");
	}

	return 0;
}
