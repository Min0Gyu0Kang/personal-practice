#include <stdio.h>
#include <time.h>
//아빠는 대머리 
int main() {
	srand(time(NULL));
	printf("\n\n===아빠는 대머리: 발모제를 찾아라!===\n\n");
	printf("아빠가 발모제를 주문했는데 아무래도 다른 비슷한 모양의 염색약 물병들과 섞여버렸나봐요...\n");
	printf("물약을 바른 아빠를 도와 어느 물병이 발모제인지 알려주세요! 아빠를 도와줄 수 있는 기회는 단 한 번입니다.\n");
	int answer; //사용자 입력값
	int treatment = rand() % 4; //정답인 발모제 (0~3)

	int cntShowBottle = 0; //이번에 보여줄 병의 개수
	int prevcntShowBottle = 0; //저번에 보여줄 병의 개수
	//정답률 향상 위한 보여주는 병의 개수 다르게 함, 처음엔 물병 2개, 그 다음엔 물병 3개...
	//기회는 3번
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, }; //게임에 쓰이는 병은 4개
		do {
			cntShowBottle = rand() % 2 + 2; //2개에서 3개가 적당! 0+2, 1+2
		} while (cntShowBottle == prevcntShowBottle);
		prevcntShowBottle = cntShowBottle;
		//표시되지 않는 부분, 문제가 생성되기 위한 부분

		int isIncluded = 0; //보여줄 병에 발모제가 포함
		printf("\n> %d번째 시도 : \n", i);

		//보여줄 병 종류 선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; //0-3
			if (bottle[randBottle] == 0) { //아직 선택되지 않은 병이면 선택
				bottle[randBottle] = 1;
				if (randBottle == treatment)
					isIncluded = 1;
			}
			//이미 선택된 병이면 중복이니 다시 선택
			else {
				j--;
			}
		}
		//표시되는 부분, 정답을 제출하는 부분
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d번 ", k + 1);
		}
		printf("물약을 머리에 바릅니다 ... \n\n");
		if (isIncluded == 1)
			printf("\n성공! 머리가 났어요! \n");
		else
			printf("\n실패! 머리가 안 났어요! \n");
		printf("\n계속하시려면 아무 키나 누르세요\t");
		getchar();
	}
	printf("\n\n아빠의 발모제는 어느 물병일까요? ");
	scanf_s("%d", &answer);
	if (answer = treatment)
		printf("\n아빠의 발모제를 찾았어요! 앞으로는 염색약을 따로 보관하시겠다고 다짐하셔서 다행이네요! \n\n");
	else{
		printf("\n그 물병은 염색약이에요! 아빠의 발모제는 이제 아무도 모를 것 같네요...\n");
		printf("라고 생각했지만 엄마의 눈썰미로 %d번 물약이 발모제라는 걸 알아냈습니다. 어머니에게 효도하세요!",treatment+1);
	}
	return 0;
}