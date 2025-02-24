#include "Header.h"


int main() {

	int score_I_E = 0;
	int score_S_N = 0;
	int score_T_F = 0;
	int score_J_P = 0;

	int score[5];
	char MBTI[5];
	char negative[5] = { 'I', 'S', 'T', 'J', '\0'};
	char positive[5] = { 'E', 'N', 'F', 'P', '\0'};

	printf("I/E\n");
	printf("���� ó�� ���� ������� �ڽ��� �Ұ��ϴ� ���� �η��� �ʴ�\n");
	score_I_E = pos() + score_I_E;
	printf("���� ��Ʈ������ Ǫ�� ����� ������� ������ ���̴�\n");
	score_I_E = pos() + score_I_E;
	printf("��ȭ�� �����ϱ⺸�� ���屸 ġ�°� �����Ѵ�\n");
	score_I_E = neg() + score_I_E;
	printf("���ڸ����� ��� �� ���� ������ �����ϴ� �� �� ����\n");
	score_I_E = neg() + score_I_E;

	printf("S/N\n"); 
	printf("������ �ϰų� ������ �� �� ��ȹ�� ���� �����\n");
	score_S_N = pos() + score_S_N;
	printf("���� �����̴� ���̵� ������ �޸� �ϰ� �Ѵ�\n");
	score_S_N = pos() + score_S_N;
	printf("���� ���������� ������ �ϴ� ���̴�\n");
	score_S_N = pos() + score_S_N;
	printf("���� �������� �����̴�\n");
	score_S_N = pos() + score_S_N;

	printf("T/F\n");
	printf("������ ����� ����� �� ������ ã�⺸�� ������ ���ִ� ���̴�\n");
	score_T_F = pos() + score_T_F;
	printf("� ���������� ������ ����� ���� �����ؾ� �Ѵ�\n");
	score_T_F = pos() + score_T_F;
	printf("�ٸ� ������� ���� ��� �����ϴ��� ����ġ�� �����Ѵ�\n");
	score_T_F = pos() + score_T_F;
	printf("��ȭ�� ��󸶰� �������̳� ������ǰ���� �� ���� ������ �ش�\n");
	score_T_F = neg() + score_T_F;

	printf("J/P\n");
	printf("�� ������ �Ǿ����� ������ ���� ������ �� ����\n");
	score_J_P = pos() + score_J_P;
	printf("������ ������ �ִ��� �̷���ٰ� �Ѳ����� �ϴ� ���̴�\n");
	score_J_P = pos() + score_J_P;
	printf("ȣ����� ���� �����̴� �������̴�\n");
	score_J_P = pos() + score_J_P;
	printf("���������� ȸ������� �� ���� ���� ��� �ִٰ� �����Ѵ�\n");
	score_J_P = pos() + score_J_P;

	score[0] = score_I_E;
	score[1] = score_S_N;
	score[2] = score_T_F;
	score[3] = score_J_P;

	MBTI[4] = '\0';

	for (int i = 0; i < 4; i++) {
		if (score[i] >= 0) {
			MBTI[i] = 'p';
		}
		else {
			MBTI[i] = 'n';
		}
	}

	for (int i = 0; i < 4; i++) {
		if (MBTI[i] == 'p') {
			MBTI[i] = positive[i];
		}
		else {
			MBTI[i] = negative[i];
		}
	}

	if (strcmp(MBTI, "ISTJ") == 0) {
		printf("%s\n����� �������� �Դϴ�. ��ǿ� ���Ͽ� ��Ȯ�ϰ� ü�������� ����ϸ� �����ϰ� å�Ӱ��� �ֽ��ϴ�.\n�ι�: ǻ������", MBTI);
	}
	else if (strcmp(MBTI, "ISFJ") == 0) {
		printf("%s\n����� �����ϰ� �����ϸ� ģ���մϴ�. ���� ������������ ����Դϴ�.\n�ι� : �¿�(����)", MBTI);
	}
	else if (strcmp(MBTI, "INFJ") == 0) {
		printf("%s\n����� �γ����� ���� ������� �����մϴ�. ��ġ�� ������ ������ �ֽ��ϴ�.\n�ι� : J.K. �Ѹ�(�ظ����� �۰�)", MBTI);
	}
	else if (strcmp(MBTI, "INTJ") == 0) {
		printf("%s\n����� �����̰� ȿ������ �߽��ϴ� ��ö�� ����Դϴ�.\n�ι� : ������(��Ʃ��)", MBTI);
	}
	else if (strcmp(MBTI, "ISTP") == 0) {
		printf("%s\n�����ϰ� �����ϰ� �����ְ� �ִ� ������ ��Ÿ�� �Դϴ�.\n�ι� : �ڸ��(������)", MBTI);
	}
	else if (strcmp(MBTI, "ISFP") == 0) {
		printf("%s\n�����ϰ� ���ϰ� ���濡 ���� ������� �����ϴ�. ���� ����鿡�� ���� �۾����� �����Դϴ�\n�ι� : ����(����, BTS)", MBTI);
	}
	else if (strcmp(MBTI, "INFP") == 0) {
		printf("%s\n����� �������̰� �Ϻ��� �߱��ϸ� �����ǾƸ� �߱��ϴ� �����Դϴ�.\n�ι� : ���ͽ��Ǿ�(�۰�)", MBTI);
	}
	else if (strcmp(MBTI, "INTP") == 0) {
		printf("%s\n����� �����ϰ� �����ϸ� ����� ���� ����� �Դϴ�. ��ȸ���� �����ϴٴ� ���� ���� ����ϴ�.\n�ι� : ���ν�Ÿ��(������)", MBTI);
	}
	else if (strcmp(MBTI, "ESTP") == 0) {
		printf("%s\n����� Ȱ���ϴ� ���� �����ϴ� ������� �Դϴ�.\n�ι� : �� F �ɳ׵�(�̱��� �� �����)", MBTI);
	}
	else if (strcmp(MBTI, "ESFP") == 0) {
		printf("%s\n����� �����ο� ��ȥ�� �����ִ� ������ ��Ÿ���Դϴ�.\n�ι� : ��(����)", MBTI);
	}
	else if (strcmp(MBTI, "ENFP") == 0) {
		printf("%s\n����� ��ġ�� ������ �������� �׻� ���ο� ���ɼ��� ã�ƺ��� Ž�谡�Դϴ�.\n�ι� : �뵵����(��Ʃ��, �����)", MBTI);
	}
	else if (strcmp(MBTI, "ENTP") == 0) {
		printf("%s\n����� ������ ���� ����� ������ ���� �����մϴ�.\n�ι� : ������(��Ʈ����)", MBTI);
	}
	else if (strcmp(MBTI, "ESTJ") == 0) {
		printf("%s\n������ ��ü���̰� ������̸� ������ �̲������ ������ �Դϴ�.\n�ι� : ��濵(��ġ��)", MBTI);
	}
	else if (strcmp(MBTI, "ESFJ") == 0) {
		printf("%s\n�������� ���� �ٸ� ������� ������ �ִ� ���� �����ϸ� ������ �����ϰ� ����ְ� �����մϴ�.\n�ι� : �賲��(����)", MBTI);
	}
	else if (strcmp(MBTI, "ENFJ") == 0) {
		printf("%s\n����� �����ϰ� �������̸� �米���� ǳ���ϰ� ��Ÿ���Դϴ�.\n�ι� : �ż���(������)", MBTI);
	}
	else if (strcmp(MBTI, "ENTJ") == 0) {
		printf("%s\n����� �������̸� �����ϰ� �����°� ��ַ��� �ֽ��ϴ�. Ȱ�����̰� ������� ��ȹ�� �����մϴ�.\n�ι� : ��� ����(�丮��, �����)", MBTI);
	}
	return 0;
}