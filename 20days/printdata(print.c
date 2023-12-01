#include<stdio.h>

int main() {
	char c = 'a';
	int i = 100;
	double d = 0.1234;

	printf("문자 c를 수치로: %d\n", c);
	printf("수치 i를 문자로: %c\n", i);
	printf("수치 i를 16진수로: %#x\n", i);
	printf("실수 d를 전체 10자리로: %010.5f\n", d);
	printf("실수 d의 지수 형식: %e\n", d);
	return 0;
}