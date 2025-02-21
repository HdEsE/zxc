#include <cstdio>

struct Marine {
	int hp;
	int atk;
	int def;
};

int main() {
	// 자료형 변환 방법 (자료형)변수
	int num1 = 10;
	int num2 = 4;
	float result1 = num1 / num2;
	float result2 = (float)num1 / (float)num2;

	printf("%f, %f\n", result1, result2);

	// 유연한 자료형 변환
	int a = 100;
	float b = 200.0;
	a = b;
	printf("a는 %d", a);

	// 구조체는 마치 자료형과 유사, m1은 마치 변수와 유사
	Marine m1;
	m1.hp = 10;
	m1.atk = 200;
	m1.def = 0;

	Marine m[10];


	return 0;
}