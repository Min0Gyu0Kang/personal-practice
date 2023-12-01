#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node {//������ ��� �ٱ���
	int data; //�����͸� ���� ����
	struct _node* next; //����ü ������ �ּҰ��� ������ �� �ִ� ������ ����!
}Node; //�ʿ��� ������ ����ü ������(�ٱ���) �ϳ��� �����Ҵ��ؼ�(malloc) �̵��� �����Ѵ�

int main() {
	Node* head = NULL; //����Ʈ�� �Ӹ��� ����Ű�� ������ ����
	Node* tail = NULL; //����Ʈ�� ������ ����Ű�� ������ ����
	Node* cur = NULL; //����� �������� ���� ��ġ�� ����Ű�� ������ ����

	Node* newNode = NULL;
	int readData;

	//�����͸� �Է¹޴� ����
	while (1) {
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		//����� �߰� ����
		newNode = (Node*)malloc(sizeof(Node)); //����� ����
		newNode->data = readData; //��忡 ������ ����
		newNode->next = NULL; //����� next�� NULL�� �ʱ�ȭ
	//vvv
		if (head == NULL) //ù ��° ���
			head = newNode; //ù ��° ��带 head�� ����Ű�� ��
		else //�� ��° ���� �����
			tail->next = newNode; //����� ���� tail�� ����Ű�� ��

		tail = newNode; //����� ���� tail�� ����Ű�� ��
	}
	//^^^ ������ �� �� �κ��� �ٲ����μ� �ذ� ����!
	printf("\n");

	//�Է¹��� �������� ��� ����
	printf("�Է¹��� �������� ��ü���! \n");
	if (head == NULL)
		printf("������ �ڿ����� �������� �ʽ��ϴ� \n");

	else
	{
		cur = head;
		printf("%d ", cur->data); //ù ��° ������ ���

		while (cur->next != NULL) { //����� ��尡 �����Ѵٸ�
			cur = cur->next; //cur�� ���� ���� 
			printf("%d ", cur->data); //cur�� ���� ��� ������ ���

		}
	}
	printf("\n\n");

	//�޸��� ���� ����
	if (head == NULL)
		return 0; //������ ��尡 �������� �ʴ´�
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d(��)�� �����մϴ�. \n", head->data);
		free(delNode); //ù ��° ��� ����

		while (delNextNode != NULL) { //�� ��° ���� ������
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d(��)�� �����մϴ�. \n",delNode->data);
			free(delNode);
		}
	}
	return 0;
}

/*TRY THIS
	�� ��带 ���� ����Ʈ�� ������ �ƴ� �Ӹ��� ���Եǵ��� �����ض�
	3-2-7-8 �� 5�� �߰��ϸ� 3-2-7-8-5 �� �ƴ�
	5-3-2-7-8 �� �߰� �ǵ��� ����!

*/