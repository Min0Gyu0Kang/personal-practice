#include <stdio.h>
// 메모리 초과 떄문에 이게 뭐하는 짓인가
int main() {
    int n;
    scanf("%d", &n);

    // Initialize an array to store the count of each input element
    int arr[10001] = {0};

    // Count the occurrences of each input element
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);
        arr[num]++;
    }

    // Print the sorted result
    for (int i = 0; i < 10001; ++i) {
        // Print each element the number of times equal to its count
        for (int j = 0; j < arr[i]; ++j) {
            printf("%d\n", i);
        }
    }

    return 0;
}
