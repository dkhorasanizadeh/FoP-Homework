/*
--------------------------------------------------
Name    : Series Calculation
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
void factorial(int n, char *number)
{
    int counter = 0, i;
    number[0] = 1;
    int temp;
    for (; n >= 2; n--)
    {
        int temp = 0;
        for (i = 0; i <= counter; i++)
        {
            temp = (number[i] * n) + temp;
            number[i] = temp % 10;
            temp = temp / 10;
        }
        while (temp > 0)
        {
            number[++counter] = temp % 10;
            temp = temp / 10;
        }
    }
    for (i = counter; i >= 0; i--)
        printf("%d", number[i]);
}
int main(void)
{
    int n;
    char number[2000];
    factorial(100, number);
    return 0;
}