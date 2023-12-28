#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to calculate the Greatest Common Factor (GCF)
int findGCF(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
int findLCM(int a, int b) {
    return (a * b) / findGCF(a, b);
}

int main(){
    int A; int B;
    scanf("%d %d",&A,&B);
    int gcf = findGCF(A, B);
    int lcm = findLCM(A, B);
    printf("%d\n",gcf);
    printf("%d\n",lcm);
    return 0;
}