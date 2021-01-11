/*
--------------------------------------------------
Name    : Josephus Problem
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int josephus(int m, int n)
{
    if (n <= m)
    {
        return josephus(m, 2 * n);
    }
    else
    {
        return 2 * (m - n / 2) + 1;
    }
}
int main()
{
    unsigned int m, n, r;
    scanf("%u", &m);
    printf("%d", josephus(m, 1));
    return 0;
}