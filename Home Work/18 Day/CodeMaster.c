/*
--------------------------------------------------
Name    : 
Author  : Danial Khorasanizadeh
Course  : 
Date    : 04/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
int isPrime(int number)
{
    if (number % 3 == 0)
    {
        return 0;
    }
    int i = 5;
    while (i * i <= number)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            return 0;
        }
        i += 6;
    }
    return 1;
}
int checkPalindrome(int number, int base)
{
    int reverse = 0;
    int numberCopy = number;
    while (numberCopy)
    {
        reverse = reverse * base + numberCopy % base;
        numberCopy = numberCopy / base;
    }
    return number == reverse;
}
int main(void)
{
    int n, base, counter = 1, i;
    scanf("%d%d", &n, &base);
    if (base > 3)
    {
        counter = 2;
    }
    for (i = 5; counter != n; i += 2)
    {
        if (checkPalindrome(i, base) && isPrime(i))
        {
            counter++;
        }
    }
    printf("%d", i - 2);
    return 0;
}