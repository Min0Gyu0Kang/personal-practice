#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hasThreeConsecutiveSixes(long long num) {
    // Check if the number has at least three consecutive 6 digits
    int count = 0;
    while (num > 0) {
        if (num % 10 == 6) {
            count++;
            if (count == 3) {
                return 1; // True, the number has at least three consecutive 6 digits
            }
        } else {
            count = 0; // Reset count if the current digit is not 6
        }
        num /= 10;
    }
    return 0; // False, the number does not have at least three consecutive 6 digits
}

long long sixes(int N) {
    if (N == 1) {
        return 666;
    }
    long long init = 1666;
    int count = 2;
    while (count < N) {
        // Increase init to the next number with at least three 6 digits
        init++;
        if (hasThreeConsecutiveSixes(init)) {
            count++;
        }
    }
    return init;
}

int main(){
    int N;
    scanf("%d",&N);
    long long res= sixes(N);
    printf("%lld",res);
    return 0;
}