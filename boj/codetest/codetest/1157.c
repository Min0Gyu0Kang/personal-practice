#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char arr[1000000]; //given word 
    int freq_cnt[26]={0}; //count how many times alphabets appear
    int i,max_freq=0;
    scanf("%s",arr);
    int len= strlen(arr);
    for (i=0;i<len;i++){
        char c= arr[i];
        if((c>='a'&&c<='z') || (c>='A'&& c<='Z')){
            c=tolower(c);
            //count how many times each alphabet appears
            freq_cnt[c-'a']++;
            if(freq_cnt[c-'a']>max_freq){
                max_freq=freq_cnt[c-'a'];
            }
        }
        else{
            break; //hoping this does not happen
        }
    }
    //print most frequent alphabet in uppercase, 
    // if there are more than 2 alphabets, print ?
    int count_max_freq = 0;
    for (i = 0; i < 26; i++) {
        if (freq_cnt[i] == max_freq) {
            count_max_freq++;
        }
    }

    if (count_max_freq == 1) {
        for (i = 0; i < 26; i++) {
            if (freq_cnt[i] == max_freq) {
                printf("%c", 'A' + i);
                break;
            }
        }
    } else {
        printf("?");
    }
    
    return 0;
}