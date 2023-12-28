#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MOD 1234567891
#define R 31

long long calculate_hash(char *s) {
    int len = strlen(s);
    long long hash_value = 0;
    long long r_pow = 1;

    for (int i = 0; i < len; ++i) {
        hash_value = (hash_value + (s[i] - 'a' + 1) * r_pow) % MOD;
        r_pow = (r_pow * R) % MOD;
    }

    return hash_value;
}

int main() {
    int L;
    scanf("%d",&L);
    char input_string[L+1];
    scanf("%s", input_string);
    input_string[L] = '\0'; // Add the null terminator
    long long result = calculate_hash(input_string);

    printf("%lld\n", result);

    return 0;
}

//
// a =1 ,b=2,...z=26
// summation of 0 to L-1{ a_i}*31(^i) mod 1234567891

// 이때 a_i은 알파벳의 순서(1~26), r은 31, M은 1234567891
//