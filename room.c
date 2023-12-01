#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//비밀번호 풀기!
//문은 5개, 풀면 풀수록 어려워진다! (랜덤)
//맞추면 통과(락 해제), 틀리면 실패
int getRandomNumber(int level){
	return rand() % level * 7 + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n====%d번째 비밀번호====\n", level);
	printf("\n\t%d x %d = ?\n\n", num1, num2);
	printf("=======================\n");
	printf("비밀번호를 입력하세요 (종료= -1) >> ");
}
void success() {
	printf("\n정답! 맞았습니다!\n");
}
void fail() {
	printf("\n정답이 아닌 것 같습니다.\n");
}
int main() {
	srand((unsigned)time(NULL));
	int count = 0; //해제한 도어락 개수
printf("\n===============================================\n\
당신의 수리 능력을 시험해보고 싶습니다!\n\
눈앞에 보이는 문제를 풀고 도어락을 \"가능한 한\" 많이 해제해보세요!\
주어지는 도어락의 개수는 5개입니다!\n===============================================\n"); 
	for (int i = 1; i <= 5; i++) {
		//x * y = ?
		int x = getRandomNumber(i);
		int y = getRandomNumber(i);
		//printf("%d x %d? ",x,y);
		showQuestion(i, x, y);
		int answer = -1; // 입력 포기여도 -1로 초기화
		scanf_s("%d",&answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다! \n");
			return 0;
		}
		else if (answer == x * y){ //정답
			success();
			count++;
		}
		else{ //오답
			fail();
		} 
	}
	printf("\n\n시간 종료! 당신은 5개의 도어락 중 %d개의 도어락을 해제하였습니다.\n\n", count);
	return 0;
}