#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int r;

	srand((unsigned)time(NULL)); //임의의 값이 매번 다르게, time으로 시간이 1970.01.01 로 설정됨
	r = rand();
	printf("%d", r); //0~32767 사이의 정수
	return 0;
} //왜 안 되누?