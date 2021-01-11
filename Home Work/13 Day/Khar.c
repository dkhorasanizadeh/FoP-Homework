/*
--------------------------------------------------
Name    : Khar
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 29/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int numberOfBooks, hoseleh;
    scanf("%d %d", &numberOfBooks, &hoseleh);
    if (hoseleh > numberOfBooks / 2)
    {
        printf("Impossible");
    }
    else
    {
        int i = 1;
        for (int n = 0; n < numberOfBooks; n += 2)
        {
            printf("%d ", i);
            i += hoseleh + 1;
            printf("%d ", i);
            i -= hoseleh;
        }
    }
    return 0;
}