#include <stdio.h>
#include <stdlib.h>

// Compare numbers and arrange from lowest to highest value
typedef struct {
    int value;
    char *character;  // use char pointer for dynamic memory allocation
} Pair;

// Comparison function for qsort
int comparePairs(const void *a, const void *b) {
    return ((Pair*)a)->value - ((Pair*)b)->value;
}

int main() {
    int N; // N <= 100000
    scanf("%d", &N);

    Pair arr[N];

    for (int i = 0; i < N; i++) {
        arr[i].character = (char *)malloc(101 * sizeof(char));  // assuming a maximum of 101 characters
        scanf("%d %s", &arr[i].value, arr[i].character);  // [value] [character] format
    }

    // Use qsort for efficient sorting
    qsort(arr, N, sizeof(Pair), comparePairs);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", arr[i].value, arr[i].character);

        // free allocated memory for each character
        free(arr[i].character);
    }

    return 0;
}
