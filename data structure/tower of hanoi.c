#include <stdio.h>
//from 에 꽃혀있는 num 개의 원반을 by를 거쳐서 to로 이동
void HanoiTowerMove(int num,char from,char by,char to) {
	if (num == 1)
		printf("원반 1을 %c에서 %c로 이동 \n", from, to); //이동할 원반의 수가 1개이면 그냥 옮긴다
	else { //이동할 원반의 수가 1개 초과이면?
		HanoiTowerMove(num - 1, from, to, by);
		printf("원반 %d(을)를 %c에서 %c로 이동 \n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}

}
int main() {
	HanoiTowerMove(3, 'A', 'B', 'C'); //막대 A의 원반 3개에서(from) 막대 B를 거쳐(by) 막대 C로 옮기기(to)
	return 0;
}
/*하노이의 숭고한 타워
  =|= 작은     |				|
 ==|== 작은    |				|
===|=== 큰     |				|
   A		   B				C
1. 작은 원반 num-1개를 A (from)=> B(to)
2. 큰 원반 1개를 A=> C
3. 작은 원반 num-1개를 B=>C
*/