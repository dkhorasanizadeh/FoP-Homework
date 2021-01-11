/*
--------------------------------------------------
Name    : Vazir
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int v1, v2, v3, v4;
    scanf("%d%d%d%d", &v1, &v2, &v3, &v4);
    if (v1 == v2 - 1 || v1 == v3 - 2 || v1 == v4 - 3 || v2 == v3 - 1 || v2 == v4 - 2 || v3 == v4 - 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}