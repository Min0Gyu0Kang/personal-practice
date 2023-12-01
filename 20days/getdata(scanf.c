#include <stdio.h>


int main() {
	char c;
	int i;
	double d;
	char s[20];

	printf("문자를 입력 > ");
	scanf("%c", &c);
	printf("정수를 입력 > ");
	scanf("%d", &i);
	printf("실수를 입력 > ");
	scanf("%lf", &d);
	printf("문자열을 입력 > ");
	scanf("%s", s);
	printf("문자 c : %c\n", c);
	printf("정수 i : %d\n", i);
	printf("실수 d : %f\n", d);
	printf("문자열 s : %s\n", s);
	return 0;
}