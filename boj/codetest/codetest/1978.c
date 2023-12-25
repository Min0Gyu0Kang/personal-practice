#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    int sqrtN = (int)sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main(){
    int N;
    int i=0;
    scanf("%d",&N);
    int a[N];
    int prime=0;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(isPrime(a[i])){
            prime++;
        }
    }
    printf("%d",prime);

    return 0;
}
//소수 하는 법!