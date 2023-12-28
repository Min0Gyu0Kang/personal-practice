#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (originalNum == reversedNum);
}

int main() {
    int N;

    // Get input until N is 0
    do {
        // "Enter a number (0 to exit)
        scanf("%d", &N);

        // Check if N is a palindrome
        if (N != 0) {
            if (isPalindrome(N)) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }

    } while (N != 0);

    return 0;
}
