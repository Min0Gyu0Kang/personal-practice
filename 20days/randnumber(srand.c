#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int r;

	srand((unsigned)time(NULL)); //������ ���� �Ź� �ٸ���, time���� �ð��� 1970.01.01 �� ������
	r = rand();
	printf("%d", r); //0~32767 ������ ����
	return 0;
} //�� �� �Ǵ�?