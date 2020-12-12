/*
--------------------------------------------------
Name    : Exponential 
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
float exponential(int x, int n)
{
    double exp = 1;
    float factorial = 1;
    for (int i = 1; i < n; i++)
    {
        factorial *= i;
        exp += pow(x, i) / factorial;
    }
    return exp;
}
int main(void)
{
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%.3f", exponential(x, n));
    return 0;
}