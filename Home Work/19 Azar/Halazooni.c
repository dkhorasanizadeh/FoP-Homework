/*
--------------------------------------------------
Name    : Halazooni
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int findLocation(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d %d", findLocation(n + 1), findLocation(n));
    return 0;
}
int findLocation(int n)
{
    if (n == 1 || n == 2)
    {
        return 0;
    }
    switch (n % 4)
    {
    case 0:
        n -= 1;
        return (n + 1) / 4;
        break;
    case 1:
        n = -1 * (n - 2);
        return (n - 1) / 4;
        break;
    case 2:
        n = -1 * (n - 3);
        return (n - 1) / 4;
        break;
    default:
        return (n + 1) / 4;
        break;
    }
}