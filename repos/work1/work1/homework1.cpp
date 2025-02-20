#include <cstdio>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int value = -512;
	printf("%d 입니다\n", value);
	printf("%d\n", sum(1, 2));
	int value2;
	printf("제곱할 숫자 입력:");
	scanf_s("%d", &value2);
	printf("제곱은 %d", value2*value2);
	return 0;
	// 이것은 실험을 위한 주석
	// 이것은 실험을 위한 주석2
}