#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(long long int*)a - *(long long int*)b);
}

// sort numbers in ascending order, all numbers should not be repeated

int main(){
    long long int N;
    scanf("%lld",&N);
    // Dynamic memory allocation for the array
    long long int *a = malloc(N * sizeof(long long int));
    for(long long int i=0;i<N;i++){
        scanf("%lld",&a[i]);
    }
    // Using qsort to sort the array
    qsort(a, N, sizeof(long long int), compare);

    for(long long int i=0;i<N;i++){
        // Check if the current element is different from the previous one
        if (a[i] != a[i - 1]) {
            printf("%lld\n", a[i]); // Print the current element
        }
    }
    free(a);

    return 0;
}