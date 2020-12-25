/*
--------------------------------------------------
Name    : Fan
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 24/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            printf("*");
            for (int j = 0; j < 2 * size - 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < size; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else if (i != size - 1)
        {
            printf("* ");
            for (int j = 0; j < i - 1; j++)
            {
                printf("  ");
            }
            printf("* ");
            for (int j = 0; j < (size - 1) - i; j++)
            {
                printf("  ");
            }
            printf("* ");
            for (int j = (size - 2) - i; j > 0; j--)
            {
                printf("  ");
            }
            printf("* \n");
        }
        else
        {
            for (int j = 0; j < size + 1; j++)
            {
                printf("* ");
            }
        }
    }
    printf("\n");
    for (int i = size; i > 0; i--)
    {
        if (i == size)
        {
            for (int j = 0; j < size - 1; j++)
            {
                printf("  ");
            }
            for (int j = 0; j < size + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else if (i != 1)
        {
            for (int j = 0; j < i - 1; j++)
            {
                printf("  ");
            }
            printf("*");
            for (int j = 0; j < size - 1 - i; j++)
            {
                printf("  ");
            }
            printf(" *");
            for (int j = 0; j < size - i; j++)
            {
                printf("  ");
            }
            printf(" *");
            for (int j = 0; j < i - 2; j++)
            {
                printf("  ");
            }
            printf(" *");
            printf("\n");
        }
        else
        {
            for (int j = 0; j < size; j++)
            {
                printf("* ");
            }
            for (int j = 0; j < size - 1; j++)
            {
                printf("  ");
            }
            printf("*");
        }
    }
    return 0;
}