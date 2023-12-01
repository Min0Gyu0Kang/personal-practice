#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List * plist)
{
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

void LInsertFront(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if(plist->tail == NULL) //첫 번째 노드라면
	{
		plist->tail = newNode; //tail towards newNode
		newNode->next = newNode; //data into newNode
	}
	else 
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		//LInsert 와 다르지 않나요
	}

	(plist->numOfData)++;
}

void LInsert(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if(plist->tail == NULL) 
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else // > 7  -> 4 -> 2 -
	{
		newNode->next = plist->tail->next; 
		plist->tail->next = newNode; 
		plist->tail = newNode; //LInsertFront보다 한 줄 더 있네?
	}

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
	if(plist->tail == NULL)    // 저장된 노드가 없다면
		return FALSE;
	// > 1(<cur;head) >2 >3 >4 >5(<before/<tail) -
	plist->before = plist->tail; //before > tail
	plist->cur = plist->tail->next; //cur > head

	*pdata = plist->cur->data; //return cur value
	return TRUE;
}

int LNext(List * plist, Data * pdata)
{
	if(plist->tail == NULL)    // 저장된 노드가 없다면
		return FALSE;
	// > 1(<before;head) >2(<cur) >3 >4 >5(<tail) -
	plist->before = plist->cur; //move before one node to right
	plist->cur = plist->cur->next; //move cur one node to right

	*pdata = plist->cur->data; //return cur value
	return TRUE;
}

Data LRemove(List * plist)
{
	Node * rpos = plist->cur;
	Data rdata = rpos->data;

	if(rpos == plist->tail)    // 삭제 대상을 tail이 가리킨다면
	{
		if(plist->tail == plist->tail->next)    // 그리고 마지막 남은 노드라면
			plist->tail = NULL;
		else
			plist->tail = plist->before;
	}

	plist->before->next = plist->cur->next; //핵심연산 1 node before removed node to the right
	plist->cur = plist->before; //핵심연산 2 cur to the left

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}