#include <stdio.h>

int main() {
	int m, n;

	printf("수치를 입력 > ");
	scanf("%d", &m);
	n = (m < 0) ? m * -1 : m;
	printf("%d의 절대값은 %d\n", m, n);
	return 0;
}