
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Up and down
int main_ng() {
	srand((unsigned)time(NULL));
	int n = rand()%100 +1;
	int guess = 0, chance = 5;
	while (chance > 0) {
		printf("숫자를 입력하세요!(1~100까지) ");
		scanf("%d",&guess);
		if (guess > n) {
			printf("\n너무 높아요!\n");
			chance--;
			printf("남은 기회: %d\n\n", chance);

		}
		if (guess < n) {
			printf("\n너무 낮아요!\n");
			chance--;
			printf("남은 기회: %d\n\n", chance);
		}
		if (guess == n){
			printf("\n정답을 맞췄어요! 숫자: %d\n", n);
			printf("남은 기회: %d\n\n", chance);
			return 0;
		}
	}
	if (chance <= 0)
		printf("\n아쉽지만 더 이상 맟출 수 없어요! 정답은 %d였습니다!\n\n", n);
	return 0;
}