#include <stdio.h>

int main() {
	int year, day = 28;

	printf("연도를 입력 > ");
	scanf("%d", &year);
	day += (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	printf("%d년 2월의 날 수는 %d일\n", year, day);
	return 0;
}