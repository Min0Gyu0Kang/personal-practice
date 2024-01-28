#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int arr[MAX];

void solution(int arr[], int n, int num) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == num) {
            printf("1\n");
            return;
        } else if (arr[mid] < num) {
            start = mid + 1;
        } else if (arr[mid] > num) {
            end = mid - 1;
        }
    }

    printf("0\n");
}

int compare(const int* a, const int* b){
int A = *(int*)a;
int B = *(int*)b;
if (A > B){
    return 1;
}else if (A < B){ 
    return -1;
}

}

int main() {
    int n, m, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &num);
        solution(arr, n, num);
    }

    return 0;
}
