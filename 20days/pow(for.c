#include <stdio.h>

int main() {
	int i, d = 0, pownumber = 1;

	printf("������ ���� �Է� > ");
	scanf("%d", &d);
	for (i = 0; i < d; i++) {
		pownumber *= 2;
	}
	printf("2�� %d���� %d\n", d, pownumber);
	return 0;
}