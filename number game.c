
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Up and down
int main_ng() {
	srand((unsigned)time(NULL));
	int n = rand()%100 +1;
	int guess = 0, chance = 5;
	while (chance > 0) {
		printf("���ڸ� �Է��ϼ���!(1~100����) ");
		scanf("%d",&guess);
		if (guess > n) {
			printf("\n�ʹ� ���ƿ�!\n");
			chance--;
			printf("���� ��ȸ: %d\n\n", chance);

		}
		if (guess < n) {
			printf("\n�ʹ� ���ƿ�!\n");
			chance--;
			printf("���� ��ȸ: %d\n\n", chance);
		}
		if (guess == n){
			printf("\n������ ������! ����: %d\n", n);
			printf("���� ��ȸ: %d\n\n", chance);
			return 0;
		}
	}
	if (chance <= 0)
		printf("\n�ƽ����� �� �̻� ���� �� �����! ������ %d�����ϴ�!\n\n", n);
	return 0;
}