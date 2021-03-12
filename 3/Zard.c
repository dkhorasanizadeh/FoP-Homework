/*
--------------------------------------------------
Name    : Zard
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 21/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int count;
    scanf("%d", &count);
    printf("W");
    while (count > 0)
    {
        printf("o");
        count--;
    }
    printf("w!");
    return 0;
}