#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int binomial_coefficient(int n, int k) {
    if (k < 0 || k > n) {
        return 0;  // Invalid input, as k should be between 0 and n (inclusive)
    } else {
        return factorial(n) / (factorial(k) * factorial(n - k));
    }
}

int main(){
    int n; int k;
    scanf("%d %d",&n,&k);
    int res=binomial_coefficient(n,k);
    printf("%d",res);
    return 0;
}