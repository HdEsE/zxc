#include <cstdio>

// main �Լ��� �ƴϸ� �����Ϸ��� ȣ���� �ؾ���
int inputfunction() {
	int input;

	printf("�Է��ϼ���: ");

	scanf_s("%d", &input);
	// �Է��� �������� �ݵ�� ���� �տ� &�־�� ��


	printf("�Էµ� ��: %d\n", input);
	return 0;
}

int myValue(int a, int b, int c) {
	return a + b / c;
}

// main �Լ��� �ڵ����� ������ �� > ��� C���α׷����� main�Լ��� ����
int main() {
	int value = myValue(100, 200, 200);

	printf("%d\n", value);

	int input;
	printf("�Է��ϼ���:");
	scanf_s("%d", &input);
	printf("�Էµ� ��: %d", input);
	printf("����");

	
	return 0;
}
