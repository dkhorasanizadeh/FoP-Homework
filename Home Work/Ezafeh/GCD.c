/*
--------------------------------------------------
Name    : GCD 
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
unsigned long long int gcd(unsigned long long int one, unsigned long long int two)
{
    if (two != 0)
    {
        return gcd(two, one % two);
    }
    else
    {
        return one;
    }
}
int lcm(unsigned long long int one, unsigned long long int two)
{
    return (one * two) / gcd(one, two);
}
int main(void)
{
    unsigned long long int num1, num2;
    scanf("%llu %llu", &num1, &num2);
    printf("%llu", gcd(num1, num2));
    return 0;
}