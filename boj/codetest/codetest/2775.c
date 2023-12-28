#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int k, n;
        scanf("%d %d", &k, &n);
        int apt[15][15]={0}; //몇 명이 kth 층 n호에 사나요

        // 0층 초기화
        for (int i = 1; i <= n; ++i) {
            apt[0][i] = i;
        }

        // 나머지 층 계산
        for (int i = 1; i <= k; ++i) {
            for (int j = 1; j <= n; ++j) {
                apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
            }
        }
        printf("%d\n", apt[k][n]);
    }

    return 0;
}

// 0층의 1호는 1명, 2호는 2명, ... 14호에는 14명이 삽니다.
// 1층의 1호는 1명 (0층 1호)
// 1층의 2호는 3명 (0층 1호 + 0층 2호)
// 2층의 3호는 6명 (0층 1호 + 0층 2호 + 0층 3호)