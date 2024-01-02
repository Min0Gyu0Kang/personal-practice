#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    long long int A, B, V;
    scanf("%lld %lld %lld", &A, &B, &V);

    // 정상 도착 시 B는 일어나지 않는다. 목표는 V-B다.
    long long int days = (V - B - 1) / (A - B) + 1;

    printf("%lld", days);
    
    return 0;
}