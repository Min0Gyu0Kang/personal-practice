#include <stdio.h>

int main() {

	printf("char: %d, short: %d, int: %d, long: %d, long long:%d\n",
		sizeof(char),
		sizeof(short),
		sizeof(int),
		sizeof(long),
		sizeof(long long)
		);
	
	return 0;
}

//직접 구하려면
/*
int size;

size = sizeof(int);

OR
int num1 = 0;
int size;

size= sizeof(num1)

*/