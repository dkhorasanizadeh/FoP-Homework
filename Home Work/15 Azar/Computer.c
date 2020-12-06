/*
--------------------------------------------------
Name    : Virus
Author  : Danial Khorasanizadeh
Course  : Foundations of programming
Date    : 01/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    bool check = false;
    int k, count = 1, n;
    scanf("%d", &n);
    int log = (int)log10(n);
    for (int i = 0; i < log; i++)
    {
        count *= 2;
    }
    for (int i = (int)pow(10, log); i < ((int)pow(10, log) + 2 * (int)pow(10, log - 1)) && i <= n; i++, check = true)
    {
        k = i;
        while (k > 0 && check)
        {
            if ((k % 10) == 0 || (k % 10) == 1)
            {
                k /= 10;
            }
            else
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}