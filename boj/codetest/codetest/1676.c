#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long count_trailing_zeros_in_factorial(int n) {
    // 초기값 설정
    long long count = 0;

    // Count factors of 5 in the range [1, n]
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    long long count = count_trailing_zeros_in_factorial(N);
    printf("%lld", count);
    return 0;
}
