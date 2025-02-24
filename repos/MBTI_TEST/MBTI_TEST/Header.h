#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>

int pos() {
	int input;
	int score = 0;
	for (;;) {
		printf("선택지 입력(1.강한 부정  2.약한 부정  3.약한 긍정  4.강한 긍정): ");
		scanf("%d", &input);
		switch (input) {
		case 1:
			score = -3;
			break;
		case 2:
			score = -1;
			break;
		case 3:
			score = 1;
			break;
		case 4:
			score = 3;
			break;
		default:
			printf("잘못입력하셨습니다.\n");
			continue;
	}
		break;
	}
	return score;
}

int neg() {
	int input;
	int score = 0;
	for (;;) {
		printf("선택지 입력(1.강한 부정  2.약한 부정  3.약한 긍정  4.강한 긍정): ");
		scanf("%d", &input);
		switch (input) {
		case 1:
			score = 3;
			break;
		case 2:
			score = 1;
			break;
		case 3:
			score = -1;
			break;
		case 4:
			score = -3;
			break;
		default:
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		break;
	}

	return score;
}
