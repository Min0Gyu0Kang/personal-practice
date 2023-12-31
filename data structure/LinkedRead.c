#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node {//변수를 담는 바구니
	int data; //데이터를 담을 공간
	struct _node* next; //구조체 변수의 주소값을 저장할 수 있는 포인터 변수!
}Node; //필요할 때마다 구조체 변수를(바구니) 하나씩 동적할당해서(malloc) 이들을 연결한다

int main() {
	Node* head = NULL; //리스트의 머리를 가리키는 포인터 변수
	Node* tail = NULL; //리스트의 꼬리를 가리키는 포인터 변수
	Node* cur = NULL; //저장된 데이터의 현재 위치를 가리키는 포인터 변수

	Node* newNode = NULL;
	int readData;

	//데이터를 입력받는 과정
	while (1) {
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		//노드의 추가 과정
		newNode = (Node*)malloc(sizeof(Node)); //노드의 생성
		newNode->data = readData; //노드에 데이터 저장
		newNode->next = NULL; //노드의 next를 NULL로 초기화
	//vvv
		if (head == NULL) //첫 번째 노드
			head = newNode; //첫 번째 노드를 head가 가리키게 됨
		else //두 번째 이후 노드라면
			tail->next = newNode; //노드의 끝을 tail이 가리키게 함

		tail = newNode; //노드의 끝을 tail이 가리키게 함
	}
	//^^^ 문제는 이 윗 부분을 바꿈으로서 해결 가능!
	printf("\n");

	//입력받은 데이터의 출력 과정
	printf("입력받은 데이터의 전체출력! \n");
	if (head == NULL)
		printf("지정된 자연수가 존재하지 않습니다 \n");

	else
	{
		cur = head;
		printf("%d ", cur->data); //첫 번째 데이터 출력

		while (cur->next != NULL) { //연결된 노드가 존재한다면
			cur = cur->next; //cur이 다음 노드로 
			printf("%d ", cur->data); //cur의 현재 노드 데이터 출력

		}
	}
	printf("\n\n");

	//메모리의 해제 과정
	if (head == NULL)
		return 0; //해제할 노드가 존재하지 않는다
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d(을)를 삭제합니다. \n", head->data);
		free(delNode); //첫 번째 노드 삭제

		while (delNextNode != NULL) { //두 번째 이후 노드삭제
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d(을)를 삭제합니다. \n",delNode->data);
			free(delNode);
		}
	}
	return 0;
}

/*TRY THIS
	새 노드를 연결 리스트의 꼬리가 아닌 머리에 삽입되도록 변경해라
	3-2-7-8 에 5를 추가하면 3-2-7-8-5 가 아닌
	5-3-2-7-8 로 추가 되도록 구현!

*/