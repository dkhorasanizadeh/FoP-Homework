/*
--------------------------------------------------
Name    : Khodahafezi ba aadad
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int takRaghami(unsigned long long int number)
{
    int sum;
    unsigned long long int temp = number;
    while ((int)log10(number) + 1 > 1)
    {
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        number = sum;
        temp = number;
        sum = 0;
    }
    return number;
}
int main(void)
{
    unsigned long long int number;
    scanf("%llu", &number);
    printf("%llu", takRaghami(number));
    return 0;
}