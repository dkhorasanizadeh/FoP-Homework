/*
--------------------------------------------------
Name        : Sarab
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int tempX, tempY, items;
    scanf("%d", &items);
    for (int i = 0; i < items; i++)
    {
        scanf("%d%d", &tempX, &tempY);
        if (tempX == tempY)
        {
            if (tempX % 2 == 0)
            {
                printf("%d\n", 2 * tempX);
            }
            else
            {
                printf("%d\n", 2 * tempX - 1);
            }
        }
        else if ((tempX - 2) == tempY)
        {
            if (tempX % 2 == 0)
            {
                printf("%d\n", 2 * tempX - 2);
            }
            else
            {
                printf("%d\n", 2 * tempX - 3);
            }
        }
        else
        {
            printf("%d\n", -1);
        }
    }
}