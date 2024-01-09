#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// compare 함수를 사용하여 qsort를 위한 비교 함수 정의
int compare(const void *a, const void *b) {
    // 길이가 다르면 길이 순으로 정렬
    if (strlen((char *)a) != strlen((char *)b)) {
        return strlen((char *)a) - strlen((char *)b);
    } 
    // 길이가 같으면 사전 순으로 정렬
    else {
        return strcmp((char *)a, (char *)b);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char words[20000][51];  // 단어를 저장하는 배열 (최대 20,000개, 각 단어의 최대 길이는 50)

    for (int i = 0; i < n; ++i) {
        scanf("%s", words[i]);
    }

    // qsort를 사용하여 정렬
    qsort(words, n, sizeof(words[0]), compare);

    // 중복된 단어 제거하며 출력
    for (int i = 0; i < n; ++i) {
        if (i == 0 || strcmp(words[i], words[i - 1]) != 0) {
            printf("%s\n", words[i]);
        }
    }

    return 0;
}


// Arrange given array according to word length in ascending order
// arrange words of same length in alphabetical appearing order
// if there are duplicate words, delete recurring words
