/*
--------------------------------------------------
Name    : Quiz 1
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall99)
Date    : 02/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int reverseNumber(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        reverse = (reverse * 10) + (number % 10);
        number = number / 10;
    }
    return reverse;
}
int convertToBase(int number, int targetBase)
{
    int temp = 1;
    while (number > 0)
    {
        temp = (temp * 10) + (number % targetBase);
        number = number / targetBase;
    }
    number = reverseNumber(temp) / 10;
    return number;
}
int main(void)
{
    int number, targetBase;
    scanf("%d %d", &number, &targetBase);
    printf("%d", convertToBase(number, targetBase));
    return 0;
}