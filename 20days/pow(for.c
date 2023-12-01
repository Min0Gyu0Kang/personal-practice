#include <stdio.h>

int main() {
	int i, d = 0, pownumber = 1;

	printf("Á¦°ö½Â ¼ö¸¦ ÀÔ·Â > ");
	scanf("%d", &d);
	for (i = 0; i < d; i++) {
		pownumber *= 2;
	}
	printf("2ÀÇ %d½ÂÀº %d\n", d, pownumber);
	return 0;
}