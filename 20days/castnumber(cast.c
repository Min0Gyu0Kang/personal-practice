#include<stdio.h>

int main() {
	unsigned short us = 50000;
	char c = (char)us;
	short s = us;
	int i = us;
	double d = us;

	printf(" char��: %d\n", c);
	printf(" short��: %d\n", s);
	printf(" int��: %d\n", i);
	printf(" double��: %f\n", d);
	return 0;
}