#include <cstdio>

int main() {
	int array[20];
	
	for (int i = 0; i < 20; i++) {
		array[i] = 2 * (i + 1);
		printf("%d\n", array[i]);
	}

	return 0;
}