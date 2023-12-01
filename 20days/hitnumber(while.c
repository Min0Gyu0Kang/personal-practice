#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int hit;
	int d = -1, count = 0;

	srand(time(NULL));
	hit = rand() % 10;

	while (d != hit) {
		printf("0-9 중에서 입력 >");
		scanf("%d", &d);
		while (getchar() != '\n') { }
		count++;
	}
	printf("%d번째에서 맞았어요! \n", count);
	return 0;
}
