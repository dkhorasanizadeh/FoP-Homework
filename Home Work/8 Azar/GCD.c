/*
--------------------------------------------------
Name    : GCD 
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int gcd(int one, int two)
{
    one = abs(one);
    two = abs(two);
    if (two != 0)
    {
        return gcd(two, one % two);
    }
    else
    {
        return one;
    }
}
int lcm(int one, int two)
{
    return (one * two) / gcd(one, two);
}
int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", gcd(num1, num2));
    return 0;
}