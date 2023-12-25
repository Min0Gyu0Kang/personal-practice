#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//분해합: decomposition sum
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){
    int N;
    int i=0;
    int found = 0;

    scanf("%d",&N);
    for (i = 1; i <= 1000000; i++) {
        if (i + digitSum(i) == N) {
            printf("%d", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("0");
    }
    return 0;
}