/*
--------------------------------------------------
Name    : Sigma
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 28/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int m, n, number = 0;
    scanf("%d %d", &n, &m);
    for (int i = -10; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            number += ((i + j) * (i + j) * (i + j)) / (j * j);
        }
    }
    printf("%d", number);
    return 0;
}