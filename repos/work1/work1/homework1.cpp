#include <cstdio>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int value = -512;
	printf("%d �Դϴ�\n", value);
	printf("%d\n", sum(1, 2));
	int value2;
	printf("������ ���� �Է�:");
	scanf_s("%d", &value2);
	printf("������ %d", value2*value2);
	return 0;
	// �̰��� ������ ���� �ּ�
	// �̰��� ������ ���� �ּ�2
}