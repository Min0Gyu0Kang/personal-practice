#include <stdio.h>

int main() {
	int i, j;
	for (j = 0; j < 9; j++) {
		printf("%d단", j + 1);
		for (i = 0; i < 9; i++) {
			printf(" %d X %d = %2d", j + 1, i + 1, (j + 1)*(i + 1)); /*구구단*/
		}
		printf("\n");
	}
	return 0;
}
