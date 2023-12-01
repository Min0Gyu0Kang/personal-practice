#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��й�ȣ Ǯ��!
//���� 5��, Ǯ�� Ǯ���� ���������! (����)
//���߸� ���(�� ����), Ʋ���� ����
int getRandomNumber(int level){
	return rand() % level * 7 + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n====%d��° ��й�ȣ====\n", level);
	printf("\n\t%d x %d = ?\n\n", num1, num2);
	printf("=======================\n");
	printf("��й�ȣ�� �Է��ϼ��� (����= -1) >> ");
}
void success() {
	printf("\n����! �¾ҽ��ϴ�!\n");
}
void fail() {
	printf("\n������ �ƴ� �� �����ϴ�.\n");
}
int main() {
	srand((unsigned)time(NULL));
	int count = 0; //������ ����� ����
printf("\n===============================================\n\
����� ���� �ɷ��� �����غ��� �ͽ��ϴ�!\n\
���տ� ���̴� ������ Ǯ�� ������� \"������ ��\" ���� �����غ�����!\
�־����� ������� ������ 5���Դϴ�!\n===============================================\n"); 
	for (int i = 1; i <= 5; i++) {
		//x * y = ?
		int x = getRandomNumber(i);
		int y = getRandomNumber(i);
		//printf("%d x %d? ",x,y);
		showQuestion(i, x, y);
		int answer = -1; // �Է� ���⿩�� -1�� �ʱ�ȭ
		scanf_s("%d",&answer);
		if (answer == -1) {
			printf("���α׷��� �����մϴ�! \n");
			return 0;
		}
		else if (answer == x * y){ //����
			success();
			count++;
		}
		else{ //����
			fail();
		} 
	}
	printf("\n\n�ð� ����! ����� 5���� ����� �� %d���� ������� �����Ͽ����ϴ�.\n\n", count);
	return 0;
}