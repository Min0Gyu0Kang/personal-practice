#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    long long int N; //room number in honeycomb
    long long int n=0; //number of layer in honeycomb
    scanf("%d",&N);
    // Calculate the layer of the honeycomb
    while (N > 1 + 3 * n * (n + 1)) {
        n++;
    }

    // Print the layer of the honeycomb
    printf("%d", n + 1);

    // pattern of room numbers
    // 1 where n=1
    // 2~7 where n=2
    // 8~19 where n=3
    // 1 + 3 * (n - 2) * ((n - 2) + 1) + 1 ~ 1 + 3 * (n - 1) * (n - 1 + 1)
    return 0;
}