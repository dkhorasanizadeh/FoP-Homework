/*
--------------------------------------------------
Name    : Square
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int len1, len2;
    scanf("%d%d", &len1, &len2);
    if (len1 <= len2)
    {
        printf("Wrong order!");
    }
    else if ((len1 - len2) % 2 != 0)
    {
        printf("Wrong difference!");
    }
    else
    {
        for (int i = 1; i <= len1; i++)
        {
            if (i <= (len1 - len2) / 2 || i > (len1 - len2) / 2 + len2)
            {
                for (int j = 1; j <= len1; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else
            {
                for (int j = 1; j <= len1; j++)
                {
                    if (j <= (len1 - len2) / 2 || j > (len1 - len2) / 2 + len2)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}