#include <cstdio>

int main() {
	int array[20];
	
	array[0] = 1;
	array[1] = 1;

	for (int i = 2; i < 20; i++) {
		array[i] = array[i - 1] + array[i - 2];
	}

	for (int k = 0; k < 20; k++) {
		printf("%d\n", array[k]);
	}

	return 0;
}

// 1 1 2 3 5 8 13 21 ...