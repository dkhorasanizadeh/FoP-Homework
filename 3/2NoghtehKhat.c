/*
--------------------------------------------------
Name    : 2 Noghteh, Khat
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 21/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (y1 == y2)
    {
        printf("Horizontal");
    }
    else if (x1 == x2)
    {
        printf("Vertical");
    }
    else
    {
        printf("Try again");
    }
    return 0;
}