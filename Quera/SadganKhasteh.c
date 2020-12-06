/*
--------------------------------------------------
Name    : Sadgane Khasteh
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 06/Dec/2020
Link    : https://quera.ir/problemset/contest/3406/
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
int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (reverseNumber(n1) < reverseNumber(n2))
    {
        printf("%d < %d", n1, n2);
    }
    else if (reverseNumber(n2) < reverseNumber(n1))
    {
        printf("%d < %d", n2, n1);
    }
    else
    {
        printf("%d = %d", n1, n2);
    }

    return 0;
}