/*
--------------------------------------------------
Name    : T-shirt
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 29/Nov/2020
Link    : https://quera.ir/problemset/contest/3107/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int x1, y1, x2, y2;
    scanf("%d%d %d%d", &x1, &y1, &x2, &y2);
    if (x1 >= x2 && y1 >= y2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}