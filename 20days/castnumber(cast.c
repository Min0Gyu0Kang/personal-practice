#include<stdio.h>

int main() {
	unsigned short us = 50000;
	char c = (char)us;
	short s = us;
	int i = us;
	double d = us;

	printf(" char형: %d\n", c);
	printf(" short형: %d\n", s);
	printf(" int형: %d\n", i);
	printf(" double형: %f\n", d);
	return 0;
}