/*
--------------------------------------------------
Name    : Chocolate
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming
Date    : 01/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);
    if (a1 % 2 == a2 % 2 && a1 % 2 == a3 % 2)
    {
        printf("NO NO NO");
    }
    else
    {
        int num = (a1 % 2) * 100 + (a2 % 2) * 10 + (a3 % 2);
        switch (num)
        {
        case 110:
        case 001:
            printf("NO NO YES");
            break;
        case 101:
        case 10:
            printf("NO YES NO");
            break;
        case 11:
        case 100:
            printf("YES NO NO");
            break;
        default:
            break;
        }
    }
    return 0;
}