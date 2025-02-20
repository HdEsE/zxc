#include <cstdio>

int main() {
	int input;
	printf("숫자를 입력해라: ");
	scanf_s("%d", &input);

	if (input <= 0) {
		printf("잘못 입력하셨습니다.");
	}
	else{
		for (int i = 0; i < input; i++) {
			printf("A");
	}

	return 0;
}