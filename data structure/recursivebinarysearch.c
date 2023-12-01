#include <stdio.h>

int BSearchRecur(int ar[],int first,int last,int target){
	int mid;
	if (first > last)
		return -1; //탐색 실패
	mid = (first +last)/2; //탐색대상의 중앙

	if(ar[mid]==target)
		return mid; //탐색된 타겟의 인덱스 값 반환
	else if (target<ar[mid])
		return BSearchRecur(ar,first,mid-1,target);
	else
		return BSearchRecur(ar,mid+1,last,target);
}

int main() {
	int arr[]={1,3,5,7,9};
	int idx;

	idx=BSearchRecur(arr,0,sizeof(arr)/sizeof(int)-1,7); //7의 인덱스 값을 찾아라 정답: 인덱스 3
	if (idx==-1)
		printf("탐색 실패 \n");
	else
		printf("탐색 저장 인덱스: %d \n",idx);
		
	idx=BSearchRecur(arr,0,sizeof(arr)/sizeof(int)-1,4); //4의 인덱스 값을 찾아라 정답: 탐색 실패
	if (idx==-1)
		printf("탐색 실패 \n");
	else
		printf("탐색 저장 인덱스: %d \n",idx);
	return 0;
}

//재귀형 이진탐색