/*
--------------------------------------------------
Name    : Gozaresh Kar
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 01/Dec/2020
Link    : https://quera.ir/problemset/contest/49535/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n, k, sum = 0, temp;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    if (sum >= k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}