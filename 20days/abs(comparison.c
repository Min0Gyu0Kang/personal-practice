#include <stdio.h>

int main() {
	int m, n;

	printf("��ġ�� �Է� > ");
	scanf("%d", &m);
	n = (m < 0) ? m * -1 : m;
	printf("%d�� ���밪�� %d\n", m, n);
	return 0;
}