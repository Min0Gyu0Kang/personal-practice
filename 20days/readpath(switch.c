#include <stdio.h>

int main() {
	int c;

	printf("��θ� �Է� > ");
	c = getchar();
	switch (c) {
	case '.': printf("��� ����Դϴ�\n");
		break;
	case '\\': printf("���� ����Դϴ�\n");
		break;
	default:	c = getchar();
		if (c == ':') printf("���� ����Դϴ�\n");
		else printf("��� ����Դϴ�\n");
		break;
	}
	return 0;
}