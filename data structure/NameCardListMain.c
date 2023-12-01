#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
	List list;
	NameCard * pcard;
	ListInit(&list);

	pcard = MakeNameCard("이진수", "010-1111-2222");
	LInsert(&list, pcard);

	pcard = MakeNameCard("한지영", "010-2222-5555");
	LInsert(&list, pcard);

	pcard = MakeNameCard("조수진", "010-3333-7777");
	LInsert(&list, pcard);

	// 한지영의 정보를 조회하여 출력
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "한지영")) 
		{
			ShowNameCardInfo(pcard);
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "한지영")) 
				{
					ShowNameCardInfo(pcard);
					break;
				}
			}
		}
	}

	// 이진수의 정보를 변경
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "이진수")) 
		{
			ChangePhoneNum(pcard, "010-9999-9999");
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "이진수")) 
				{
					ChangePhoneNum(pcard, "010-9999-9999");
					break;
				}
			}
		}
	}

	// 조수진의 정보를 삭제
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "조수진")) 
		{
			pcard = LRemove(&list);
			free(pcard);
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "조수진")) 
				{
					pcard = LRemove(&list);
					free(pcard);					
					break;
				}
			}
		}
	}

	// 모든 사람의 정보 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &pcard))
	{
		ShowNameCardInfo(pcard);
		
		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}

	return 0;
}
/*
이해가 안 된다면 아직 포인터 숙련도가 미숙, 화살표 -> 와 & 치는 것 좀 더 하고 와라 

blahblahmain.c가 작동하기 위해선 포함되는 헤더 (여기선 ArrayList.h,NameCard.h)를 #include)

헤더의 typedef 선언도 확인하기 (원래는 int 구조체 선언이나 NameCard* 주소값 선언으로 바꿈)

이번에 만든 것:
이름 3개 (이진수, 한지영, 조수진) 와 해당되는 3개의 전화번호 (010-2222-5555, 010-1111-2222, 010-3333-7777) 를 포함하는 연락처 내 탐색 작업
1. 한지영을 찾아서 이름을 출력하고 전화번호를 출력한다  require ShowNameCardInfo
2. 이진수의 정보를 바꾼다 (이진수, 010-2222-5555) -> (이진수, 010-9999-9999) require ChangePhoneNum
3. 조수진의 정보를 삭제한다 require LRemove 그리고 조수진의 동적할당 메모리를 해제한다 w/ free
4. 남은 연락처를 모두 출력 (이진수, 바뀐 번호) (한지영, 번호) require ShowNameCardInfo
*/