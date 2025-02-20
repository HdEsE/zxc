#include <cstdio>

// operation받고, 종료할지말지결정, input1,2 받고

int input() {
	int a=0;
	printf("수를 입력하세요: ");
	scanf_s("%d", &a);
	return a;
}

int main() {
	int operation = input();
	int input1 = input();
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
		printf("잘못입력하셨습니다.");
	}
	return 0;
}
	
