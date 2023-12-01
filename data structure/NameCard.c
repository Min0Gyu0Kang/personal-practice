#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone)
{
	NameCard * newCard = (NameCard *)malloc(sizeof(NameCard));
	strcpy_s(newCard->name, 30,name);
	strcpy_s(newCard->phone,30, phone);
	return newCard;
}
//strcpy_s �� �� �ұ�

void ShowNameCardInfo(NameCard * pcard)
{
	printf("[�̸�] %s \n", pcard->name);
	printf("[��ȣ] %s \n\n", pcard->phone);
}

int NameCompare(NameCard * pcard, char * name)
{
	return strcmp(pcard->name, name);
}
//strcmp�� �� �ұ�

void ChangePhoneNum(NameCard * pcard, char * phone)
{
	strcpy_s(pcard->phone,30, phone);
}