#include <cstdio>

// main 함수가 아니면 실행하려면 호출을 해야함
int inputfunction() {
	int input;

	printf("입력하세요: ");

	scanf_s("%d", &input);
	// 입력을 받을때는 반드시 변수 앞에 &넣어야 함


	printf("입력된 값: %d\n", input);
	return 0;
}

int myValue(int a, int b, int c) {
	return a + b / c;
}

// main 함수는 자동으로 실행이 됨 > 모든 C프로그램에는 main함수가 있음
int main() {
	int value = myValue(100, 200, 200);

	printf("%d\n", value);

	int input;
	printf("입력하세요:");
	scanf_s("%d", &input);
	printf("입력된 값: %d", input);
	printf("실험");

	
	return 0;
}
