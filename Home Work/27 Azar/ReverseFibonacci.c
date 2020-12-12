/*
--------------------------------------------------
Name    : Reverse Fibonacci
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
void reverseFibonacci(long long int nMinusOne, long long int n)
{
    if (nMinusOne >= 1)
    {
        printf("%lld\n", nMinusOne);
        reverseFibonacci((n - nMinusOne), nMinusOne);
    }
}
int main(void)
{
    long long int nMinusOne, n;
    scanf("%lld %lld", &nMinusOne, &n);
    reverseFibonacci(nMinusOne, n);
    return 0;
}