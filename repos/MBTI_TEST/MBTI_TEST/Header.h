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
		printf("������ �Է�(1.���� ����  2.���� ����  3.���� ����  4.���� ����): ");
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
			printf("�߸��Է��ϼ̽��ϴ�.\n");
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
		printf("������ �Է�(1.���� ����  2.���� ����  3.���� ����  4.���� ����): ");
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
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			continue;
		}
		break;
	}

	return score;
}
