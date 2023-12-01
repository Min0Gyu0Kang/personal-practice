#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int coin;
	int player;

	srand((time)(NULL));
	coin = rand() % 2 + 1;

	printf("앞 뒤 어느 쪽? 앞:1 뒤:2를 입력 >");
	scanf("%d", &player);
	if (coin == 1) { printf("동전은 앞면 \n"); }
	else { printf("동전은 뒷면 \n"); }

	if (player == coin) { printf("맞았어요 \n"); }
	else { printf("틀렸어요 \n"); }
	return 0;

}