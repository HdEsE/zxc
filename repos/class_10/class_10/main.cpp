#include <cstdio>

int main() {
	// �ڷ��� ��ȯ ��� (�ڷ���)����
	int num1 = 10;
	int num2 = 4;
	float result1 = num1 / num2;
	float result2 = (float)num1 / (float)num2;

	printf("%f, %f\n", result1, result2);

	// ������ �ڷ��� ��ȯ
	int a = 100;
	float b = 200.0;
	a = b;
	printf("a�� %d", a);

	return 0;
}