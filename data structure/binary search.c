#include <stdio.h>

int Bsearch(int ar[],int len,int target) {
	int first = 0; //배열 시작 값은 0번
	int last = len - 1; //n-1번이 마지막 배열 값
	int mid; //알고리즘이 비교할 탐색위치 m

	while (first <= last){  //오름차 순 배열이 아니면 작동 안 함, 배열 첫 값과 마지막 값이 같은지도 한번 더 확인!
		mid = (first + last) / 2; //0+(n-1) 을 더하여 2로 나눈다 0000000 => 000m000

		if (target == ar[mid]) //000m000 == target
			return mid; //찾는 값
		else {			//아닌 값 000m000 != target
			if (target <= ar[mid])
				last = mid- 1; //0m01000 => m1000 앞을 버림
			else
				first = mid+ 1; //0010m0 => 001m 뒤를 버림
		}


	}
	return -1;
}
	

int main() {
	int arr[] = {1, 3, 5, 7, 9}; //배열은 {1,3,5,7,9} 의 5개 항목 항상 오름차순 정렬
	int idx;

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 7); //배열에 7?
	if (idx == -1) {
		printf("탐색 실패\n");
	}
	else {
		printf("타겟 저장 인덱스: %d\n",idx);
	}

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4); //배열에 4?
	if (idx == -1) 
		printf("탐색 실패\n");
	else 
		printf("타겟 저장 인덱스: %d\n", idx);
	return 0;
}