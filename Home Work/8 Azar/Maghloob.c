/*
--------------------------------------------------
Name    : Khod Maghloob
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int temp, num1, num2 = 0;
    char len;
    scanf("%d", &num1);
    temp = num1;
    len = log10(num1) + 1;
    for (int i = 0; i < len; i++)
    {
        num2 = (num2 * 10) + (temp % 10);
        temp = temp / 10;
    }
    if (num1 == num2)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
    return 0;
}