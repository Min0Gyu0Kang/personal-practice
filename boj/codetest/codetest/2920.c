#include <stdio.h>

int main(){
    int i=0;
    int a[8]={};

    for (i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }
    // Check for ascending order
    int ascending = 1;
    for (i = 1; i < 8; i++) {
        if (a[i - 1] > a[i]) {
            ascending = 0;
            break;
        }
    }

    // Check for descending order
    int descending = 1;
    for (i = 1; i < 8; i++) {
        if (a[i - 1] < a[i]) {
            descending = 0;
            break;
        }
    }
    
    if(ascending){
        printf("ascending");
    }else if(descending){
        printf("descending");
    }else{        
        printf("mixed");
    }
    return 0;
}