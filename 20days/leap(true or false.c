#include <stdio.h>

int main() {
	int year, day = 28;

	printf("������ �Է� > ");
	scanf("%d", &year);
	day += (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	printf("%d�� 2���� �� ���� %d��\n", year, day);
	return 0;
}