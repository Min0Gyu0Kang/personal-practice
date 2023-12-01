#include <stdio.h>
//피라미드 쌓기
int main() {
	int floor;
	printf("몇 층으로 쌓겠느냐? ");
	scanf("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor-1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}/* 
 if 5
 ////*
 ///***
 //*****
 /*******
 *********
/ = " "(j부분)  */