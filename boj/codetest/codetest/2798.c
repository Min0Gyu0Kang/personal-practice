#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N,M; //몇 장의 카드(3~100), M 넘으면 bust(300,000)
    int i=0;
    scanf("%d %d",&N,&M);
    int cards[N]; //(~100,000)
    for(i=0;i<N;i++){
        scanf("%d",&cards[i]);
    }
    int maxSum = 0; // Variable to store the maximum sum of three cards
    int found = 0;  // Flag to indicate if a valid combination is found

    // Iterate through all possible combinations of three cards
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int cardsSum = cards[i] + cards[j] + cards[k];

                // Check if the current combination is within the threshold
                if (cardsSum <= M && cardsSum > maxSum) {
                    maxSum = cardsSum;
                    found = 1;
                }
            }
        }
    }

    // Print the result
    if (found) {
        printf("%d\n", maxSum);
    }
    return 0;
}