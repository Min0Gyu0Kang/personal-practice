#include <stdio.h>
#include <time.h>
//�ƺ��� ��Ӹ� 
int main() {
	srand(time(NULL));
	printf("\n\n===�ƺ��� ��Ӹ�: �߸����� ã�ƶ�!===\n\n");
	printf("�ƺ��� �߸����� �ֹ��ߴµ� �ƹ����� �ٸ� ����� ����� ������ ������� �������ȳ�����...\n");
	printf("������ �ٸ� �ƺ��� ���� ��� ������ �߸������� �˷��ּ���! �ƺ��� ������ �� �ִ� ��ȸ�� �� �� ���Դϴ�.\n");
	int answer; //����� �Է°�
	int treatment = rand() % 4; //������ �߸��� (0~3)

	int cntShowBottle = 0; //�̹��� ������ ���� ����
	int prevcntShowBottle = 0; //������ ������ ���� ����
	//����� ��� ���� �����ִ� ���� ���� �ٸ��� ��, ó���� ���� 2��, �� ������ ���� 3��...
	//��ȸ�� 3��
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, }; //���ӿ� ���̴� ���� 4��
		do {
			cntShowBottle = rand() % 2 + 2; //2������ 3���� ����! 0+2, 1+2
		} while (cntShowBottle == prevcntShowBottle);
		prevcntShowBottle = cntShowBottle;
		//ǥ�õ��� �ʴ� �κ�, ������ �����Ǳ� ���� �κ�

		int isIncluded = 0; //������ ���� �߸����� ����
		printf("\n> %d��° �õ� : \n", i);

		//������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; //0-3
			if (bottle[randBottle] == 0) { //���� ���õ��� ���� ���̸� ����
				bottle[randBottle] = 1;
				if (randBottle == treatment)
					isIncluded = 1;
			}
			//�̹� ���õ� ���̸� �ߺ��̴� �ٽ� ����
			else {
				j--;
			}
		}
		//ǥ�õǴ� �κ�, ������ �����ϴ� �κ�
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d�� ", k + 1);
		}
		printf("������ �Ӹ��� �ٸ��ϴ� ... \n\n");
		if (isIncluded == 1)
			printf("\n����! �Ӹ��� �����! \n");
		else
			printf("\n����! �Ӹ��� �� �����! \n");
		printf("\n����Ͻ÷��� �ƹ� Ű�� ��������\t");
		getchar();
	}
	printf("\n\n�ƺ��� �߸����� ��� �����ϱ��? ");
	scanf_s("%d", &answer);
	if (answer = treatment)
		printf("\n�ƺ��� �߸����� ã�Ҿ��! �����δ� �������� ���� �����Ͻðڴٰ� �����ϼż� �����̳׿�! \n\n");
	else{
		printf("\n�� ������ �������̿���! �ƺ��� �߸����� ���� �ƹ��� �� �� ���׿�...\n");
		printf("��� ���������� ������ ����̷� %d�� ������ �߸������ �� �˾Ƴ½��ϴ�. ��ӴϿ��� ȿ���ϼ���!",treatment+1);
	}
	return 0;
}