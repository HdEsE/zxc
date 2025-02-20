#include <cstdio>

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

	return 0;
}