/*
--------------------------------------------------
Name    : Palindrome
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
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
int convertToBase(int number, int originBase, int targetBase)
{
    int temp = 0;
    char len = log(number) + 1;
    for (int i = 0; i < len; i++)
    {
        temp = temp + (number % 10) * pow(originBase, i);
        number = number / 10;
    }
    number = temp;
    if (targetBase == 10)
    {
        return number;
    }
    else if (targetBase < 10)
    {
        temp = 0;
        while (number > 0)
        {
            temp = (temp * 10) + (number % targetBase);
            number = number / targetBase;
        }
        number = reverseNumber(temp);
        return number;
    }
}
int main(void)
{
    int number, originBase, targetBase;
    scanf("%d %d %d", &number, &originBase, &targetBase);
    number = convertToBase(number, originBase, targetBase);
    if (number == reverseNumber(number))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}