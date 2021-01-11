/*
--------------------------------------------------
Name    : Fibonacci
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 08/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int fibonacci(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    return ((n == 1 || n == 2) ? 1 : fibonacci(n - 1) + fibonacci(n - 2));
}