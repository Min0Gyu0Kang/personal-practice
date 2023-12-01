#include <stdio.h>

int main() {
	int c;

	printf("경로를 입력 > ");
	c = getchar();
	switch (c) {
	case '.': printf("상대 경로입니다\n");
		break;
	case '\\': printf("절대 경로입니다\n");
		break;
	default:	c = getchar();
		if (c == ':') printf("절대 경로입니다\n");
		else printf("상대 경로입니다\n");
		break;
	}
	return 0;
}