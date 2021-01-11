/*
--------------------------------------------------
Name        : Find Prime Factors
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int items, number, power, check = 0;
    scanf("%d", &items);
    for (int i = 0; i < items; i++)
    {
        check = 0;
        scanf("%d", &number);
        for (power = 0; !(number % 2); power++)
        {
            number /= 2;
            check = 1;
        }
        if (power == 1)
        {
            printf("2");
        }
        else if (power > 1)
        {
            printf("2^%d", power);
        }
        for (int j = 3; j <= number; j += 2)
        {
            if (check && !(number % j))
            {
                printf("*");
            }
            for (power = 0; !(number % j); power++)
            {
                number /= j;
                check = 1;
            }
            if (power == 1)
            {
                printf("%d", j);
            }
            else if (power > 1)
            {
                printf("%d^%d", j, power);
            }
        }
        printf("\n");
    }
}