/*
--------------------------------------------------
Name    : Perfect Number
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int num, divisorsSum = 0;
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            divisorsSum = divisorsSum + i;
        }
    }
    if (divisorsSum == num)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}