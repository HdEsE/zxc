#include <cstdio>

int main() {
	int input;
	printf("���ڸ� �Է��ض�: ");
	scanf_s("%d", &input);

	if (input <= 0) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	else{
		for (int i = 0; i < input; i++) {
			printf("A");
	}

	return 0;
}