/*
--------------------------------------------------
Name        : Jomleh n donbaleh
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("%f", (float)1);
    else if (n == 2)
        printf("%f", (float)5);
    else
    {
        float first = 1;
        float second = 5;
        float nth = 0;
        for (int i = 3; i <= n; i++)
        {
            nth = (first + second) / 2;
            first = second;
            second = nth;
        }
        printf("%f", nth);
    }
}
