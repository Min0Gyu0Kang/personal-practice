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
//strcpy_s 는 뭘 할까

void ShowNameCardInfo(NameCard * pcard)
{
	printf("[이름] %s \n", pcard->name);
	printf("[번호] %s \n\n", pcard->phone);
}

int NameCompare(NameCard * pcard, char * name)
{
	return strcmp(pcard->name, name);
}
//strcmp는 뭘 할까

void ChangePhoneNum(NameCard * pcard, char * phone)
{
	strcpy_s(pcard->phone,30, phone);
}