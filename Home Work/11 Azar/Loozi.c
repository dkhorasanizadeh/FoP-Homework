/*
--------------------------------------------------
Name    : Loozi
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 28/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, k = 1;
    scanf("%d", &n);
    for (int l = n; l >= -n; l - 1 ? (l -= 2) : (l -= 4))
    {
        for (int j = 0; j < 2; j++)
        {
            for (int i = ((abs(l) - 1) / 2); i > 0; i--)
            {
                printf(" ");
            }
            for (int i = n - abs(l) + 1; i > 0; i--)
            {
                printf("*");
            }
            for (int i = ((abs(l) - 1) / 2); i > 0; i--)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}