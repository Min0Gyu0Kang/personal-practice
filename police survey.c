#include <stdio.h>

//경찰 조서
int main() {
	//입력: 이름?나이?키?몸무게?범죄명?

	char name[256];
	printf("이름이 뭐에요? ");
	scanf("%s",name);

	int age;
	printf("몇살이에요? ");
	scanf("%d",&age);

	double height;
	printf("키는 몇cm이에요? ");
	scanf("%lf",&height);

	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf("%f",&weight);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf("%s",what);

	//출력: 이름?나이?키?몸무게?범죄명?
	printf("\n\n---	범죄자 정보	----\n\n");
	printf("	이름:		%s씨\n",name);
	printf("	나이:		%d살\n",age);
	printf("	키:		%.2lfcm\n",height);
	printf("	몸무게:		%.2fkg\n",weight);
	printf("	범죄명:		%s\n",what);
	return 0;
}