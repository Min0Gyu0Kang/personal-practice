#include<stdio.h>

int main() {
	char c = 'a';
	int i = 100;
	double d = 0.1234;

	printf("���� c�� ��ġ��: %d\n", c);
	printf("��ġ i�� ���ڷ�: %c\n", i);
	printf("��ġ i�� 16������: %#x\n", i);
	printf("�Ǽ� d�� ��ü 10�ڸ���: %010.5f\n", d);
	printf("�Ǽ� d�� ���� ����: %e\n", d);
	return 0;
}