#include <cstdio>

struct Marine {
	int hp;
	int atk;
	int def;
};

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

	// ����ü�� ��ġ �ڷ����� ����, m1�� ��ġ ������ ����
	Marine m1;
	m1.hp = 10;
	m1.atk = 200;
	m1.def = 0;

	Marine m[10];


	return 0;
}