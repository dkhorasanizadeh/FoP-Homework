/*
--------------------------------------------------
Name    : Josephus Problem
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 03/Dec/2020
Link    : https://quera.ir/problemset/university/604
--------------------------------------------------
*/
#include <stdio.h>
int main()
{
    unsigned int m, n, r;
    scanf("%u", &m);
    for (n = 1; n <= m;)
    {
        n *= 2;
    }
    r = m - n / 2;
    printf("%u", 2 * r + 1);
    return 0;
}