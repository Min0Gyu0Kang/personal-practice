#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int a, b,c;
    scanf("%d %d", &a, &b);
    scanf("%d",&c);
    b = b + c;
    if (b >= 60) { //more than 60 min
        a = a + (b / 60);
        b = b % 60;
    }
    if (a >= 24){ //24hr == 0 hr
        a = a % 24;
    }
    printf("%d %d",a,b);
    return 0;
}
//ù° �ٿ� ����Ǵ� �ð��� �ÿ� ���� ������ ���̿� �ΰ� ����Ѵ�. \
(��, �ô� 0���� 23������ ����, ���� 0���� 59������ �����̴�. \
������ �ð�� 23�� 59�п��� 1���� ������ 0�� 0���� �ȴ�.)