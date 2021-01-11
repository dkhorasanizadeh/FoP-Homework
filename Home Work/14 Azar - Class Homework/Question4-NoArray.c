/*
--------------------------------------------------
Name        : Argham yeki dar mian
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int numOne = 0, numTwo = 0;
    unsigned long long int num = 0;
    char len, i = 0;
    scanf("%d %d", &numOne, &numTwo);
    len = log10(numOne) + 1;
    if (numOne == 0)
    {
        printf("%d", numTwo);
    }
    else
    {
        while (i < len)
        {
            num = (num * 10) + (numTwo % 10);
            num = (num * 10) + (numOne % 10);
            numOne = numOne / 10;
            numTwo = numTwo / 10;
            i++;
        }
        for (int i = 0; i < 2 * len; i++)
        {
            printf("%d", num % 10);
            num = num / 10;
        }
    }
}
