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
//첫째 줄에 종료되는 시각의 시와 분을 공백을 사이에 두고 출력한다. \
(단, 시는 0부터 23까지의 정수, 분은 0부터 59까지의 정수이다. \
디지털 시계는 23시 59분에서 1분이 지나면 0시 0분이 된다.)