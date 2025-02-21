#include <cstdio>

int main() {
	int raw;
	int col;
	printf("가로(행): ");
	scanf_s("%d", &raw);
	printf("세로(열): ");
	scanf_s("%d", &col);

	for (int i = 0; i < raw; i++) {
		for (int k = 0; k < col; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

