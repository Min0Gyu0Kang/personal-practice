#include <stdio.h>

//���� ����
int main() {
	//�Է�: �̸�?����?Ű?������?���˸�?

	char name[256];
	printf("�̸��� ������? ");
	scanf("%s",name);

	int age;
	printf("����̿���? ");
	scanf("%d",&age);

	double height;
	printf("Ű�� ��cm�̿���? ");
	scanf("%lf",&height);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf("%f",&weight);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf("%s",what);

	//���: �̸�?����?Ű?������?���˸�?
	printf("\n\n---	������ ����	----\n\n");
	printf("	�̸�:		%s��\n",name);
	printf("	����:		%d��\n",age);
	printf("	Ű:		%.2lfcm\n",height);
	printf("	������:		%.2fkg\n",weight);
	printf("	���˸�:		%s\n",what);
	return 0;
}