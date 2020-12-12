/*
--------------------------------------------------
Name    : Bedasht va salmat
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 11/Dec/2020
Link    : https://quera.ir/problemset/contest/51865
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int grade, days;
    scanf("%d %d", &grade, &days);
    if (days == 0)
    {
        puts("20");
    }
    else if (days == 7)
    {
        printf("%d", grade);
    }
    else if (days < grade)
    {
        printf("%d", grade - days);
    }
    else
    {
        puts("0");
    }
    return 0;
}