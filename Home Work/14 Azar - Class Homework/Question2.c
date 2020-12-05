/*
--------------------------------------------------
Name        : Khar dar chaman
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int a, b, l;
    int counter = 1, aCounter = 0, bCounter = 0;
    scanf("%d%d%d", &a, &b, &l);
    while (counter <= l)
    {
        if (counter % 2 == 1)
        {
            aCounter++;
        }
        else
        {
            bCounter++;
        }
        counter++;
    }
    printf("%d", aCounter * a + bCounter * b);
}