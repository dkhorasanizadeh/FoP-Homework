/*
--------------------------------------------------
Name    : From the Future
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 28/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
long int reverseNumber(long int number)
{
    long int reverse = 0;
    while (number > 0)
    {
        reverse = (reverse * 10) + (number % 10);
        number = number / 10;
    }
    return reverse;
}
long int binaryToOctal(long long int number)
{
    int temp, len = (log10(number) + 1);
    long int targetNum = 1;
    for (int i = 0; i < len; i += 3)
    {
        temp = number % 1000;
        number = number / 1000;
        switch (temp)
        {
        case 0:
            temp = 0;
            break;
        case 1:
            temp = 1;
            break;
        case 10:
            temp = 2;
            break;
        case 11:
            temp = 3;
            break;
        case 100:
            temp = 4;
            break;
        case 101:
            temp = 5;
            break;
        case 110:
            temp = 6;
            break;
        case 111:
            temp = 7;
            break;
        default:
            break;
        }
        targetNum = targetNum * 10 + temp;
    }
    return reverseNumber(targetNum) / 10;
}
int main(void)
{
    long long int number;
    scanf("%lld", &number);
    printf("%ld", binaryToOctal(number));
    return 0;
}