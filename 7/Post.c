/*
--------------------------------------------------
Name    : Postman
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int powerMaker(long int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n % 2)
    {
        return 0;
    }
    else
    {
        return powerMaker(n / 2);
    }
}
int main(void)
{
    long int n;
    scanf("%ld", &n);
    if (powerMaker(n))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}