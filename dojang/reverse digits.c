#include <stdio.h>

int main() //reverse print a digit of 10000
{
    int num = 43561;
    int f, s, t, fr, ft;
    //4356(1), 435(6),43(5),4(3),(4)
    //scanf("%d",&num);
    f = (num / 10000) % 10; //first digit
    s = (num / 1000) % 10;
    t = (num / 100) % 10;
    fr = (num / 10) % 10;
    ft = num % 10;


    printf("%d ", ft);
    printf("%d ", fr);
    printf("%d ", t);
    printf("%d ", s);
    printf("%d ", f);

    return 0;
}