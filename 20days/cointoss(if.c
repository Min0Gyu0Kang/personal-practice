#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int coin;
	int player;

	srand((time)(NULL));
	coin = rand() % 2 + 1;

	printf("�� �� ��� ��? ��:1 ��:2�� �Է� >");
	scanf("%d", &player);
	if (coin == 1) { printf("������ �ո� \n"); }
	else { printf("������ �޸� \n"); }

	if (player == coin) { printf("�¾Ҿ�� \n"); }
	else { printf("Ʋ�Ⱦ�� \n"); }
	return 0;

}