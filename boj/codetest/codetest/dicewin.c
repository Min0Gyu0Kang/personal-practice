#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    int reward = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) { // 모두 같은 눈
        reward = 10000 + (a * 1000);
    }else if(a==b||a==c){ // b 나 c가 다른 눈
        reward = 1000 + (a * 100);
    }else if (b == c) { // a가 다른 눈
        reward = 1000 + (b * 100);
    }else{ // 모두 다른 눈
        if (a > b && a > c) { // a가 큰 눈
            reward = a * 100;
        }else if (b > a && b > c) { // b가 큰 눈
            reward = b * 100;
        }else if (c > a && c > b) { // c가 큰 눈
            reward = c * 100;
        }
    }
    printf("%d", reward);
    return 0;
}


//같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. \
같은 눈이 2개만 나오는 경우에는 1, 000원 + (같은 눈)×100원의 상금을 받게 된다.\
모두 다른 눈이 나오는 경우에는(그 중 가장 큰 눈)×100원의 상금을 받게 된다.
