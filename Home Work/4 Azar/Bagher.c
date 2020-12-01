/*
--------------------------------------------------
Name    : Bagher
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 21/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b < 180 && a + c < 180 && b + c < 180 && a + b + c == 180)
        printf("Yes");
    else
        printf("No");
    return 0;
}