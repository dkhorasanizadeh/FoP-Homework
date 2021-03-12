/*
--------------------------------------------------
Name    : Aliakbar
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int min(int a, int b)
{
    return (a <= b) ? a : b;
}
int main(void)
{
    int one;
    scanf("%d", &one);
    char str1[100000] = {0};
    if (one > 0)
    {

        scanf("%s", str1);
    }
    int two;
    scanf("%d", &two);
    char str2[100000] = {0};
    if (two > 0)
    {
        scanf("%s", str2);
    }
    int i = 0;
    for (i = 0; i < min(strlen(str1), strlen(str2)); i++)
    {
        if (str1[i] != str2[i])
        {
            break;
        }
    }
    printf("%d", one + two - 2 * i);
    return 0;
}