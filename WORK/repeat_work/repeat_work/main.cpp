#include <cstdio>

int main() {
	int input;
	printf("�Է��ϼ���: ");
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++) {
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}