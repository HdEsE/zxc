#include <cstdio>

// operation�ް�, ����������������, input1,2 �ް�

int input() {
	int a=0;
	//printf("���� �Է��ϼ���: "); > ���⼭ printf�� �ϱ⺸�� �������� �ϴ°� ����
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &a);
	return a;
}

int main() {
	printf("operation �Է�:");
	int operation = input();
	printf("input1 �Է�:");
	int input1 = input();
	printf("input2 �Է�:");
	int input2 = input();

	if (operation == 0) {
		int result = input1 + input2;
		printf("%d", result);
	}

	else if (operation == 1) {
		int result = input1 - input2;
		printf("%d", result);
	}

	else if (operation == 2) {
		int result = 1;
		for (int i = 0; i < input2; i++) {
			result = result * input1;
		}
		printf("%d", result);
	}

	else {
		printf("�߸��Է��ϼ̽��ϴ�.");
	}
	return 0;
}
	
