#include <stdio.h>


int main() {
	char c;
	int i;
	double d;
	char s[20];

	printf("���ڸ� �Է� > ");
	scanf("%c", &c);
	printf("������ �Է� > ");
	scanf("%d", &i);
	printf("�Ǽ��� �Է� > ");
	scanf("%lf", &d);
	printf("���ڿ��� �Է� > ");
	scanf("%s", s);
	printf("���� c : %c\n", c);
	printf("���� i : %d\n", i);
	printf("�Ǽ� d : %f\n", d);
	printf("���ڿ� s : %s\n", s);
	return 0;
}