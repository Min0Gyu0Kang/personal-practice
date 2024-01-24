#include <stdio.h>

#define LM 50 //chessboard is 50*50 max

char map[LM][LM];
int n, m, min = 64; //8by8 chessboard would have 64 spaces

void checkMin(char c, int N, int M) {
    int cnt = 0;
    for (int y = N; y < N + 8; ++y) {
        for (int x = M; x < M + 8; ++x) {
            if ((y + x) % 2 == 0) {
                if (map[y][x] != c) ++cnt;
            } else {
                if (map[y][x] == c) ++cnt;
            }
        }
    }
    if (cnt < min) min = cnt;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int y = 0; y < n; ++y) scanf("%s", map[y]);

    for (int y = 0; y < n - 7; ++y) {
        for (int x = 0; x < m - 7; ++x) {
            checkMin('B', y, x); //when it starts with B: map[0][0] = "B"
            checkMin('W', y, x); //when it starts with W: map[0][0] = "W"
        }
    }

    printf("%d\n", min);
    return 0;
}
