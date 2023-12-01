#include <stdio.h>
//from �� �����ִ� num ���� ������ by�� ���ļ� to�� �̵�
void HanoiTowerMove(int num,char from,char by,char to) {
	if (num == 1)
		printf("���� 1�� %c���� %c�� �̵� \n", from, to); //�̵��� ������ ���� 1���̸� �׳� �ű��
	else { //�̵��� ������ ���� 1�� �ʰ��̸�?
		HanoiTowerMove(num - 1, from, to, by);
		printf("���� %d(��)�� %c���� %c�� �̵� \n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}

}
int main() {
	HanoiTowerMove(3, 'A', 'B', 'C'); //���� A�� ���� 3������(from) ���� B�� ����(by) ���� C�� �ű��(to)
	return 0;
}
/*�ϳ����� ������ Ÿ��
  =|= ����     |				|
 ==|== ����    |				|
===|=== ū     |				|
   A		   B				C
1. ���� ���� num-1���� A (from)=> B(to)
2. ū ���� 1���� A=> C
3. ���� ���� num-1���� B=>C
*/