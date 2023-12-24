#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int T,H,W,N;
    int i=0;
    scanf("%d",&T);
    //store inputs to array
    int roomnum[T];
    for(i=0;i<T;i++){
        scanf("%d %d %d",&H,&W,&N);
        // Calculate room number
        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;

        // Store the room number in the array
        roomnum[i] = floor * 100 + room;
    }

    // Print the room numbers
    for (i = 0; i < T; i++) {
        printf("%d\n", roomnum[i]);
    }
        //YXX or YYXX format
        // room order: 101,201,301,...,H01 then 102,...H02, until H0N
    
    return 0;
}