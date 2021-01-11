/*
--------------------------------------------------
Name        : Jomleh n donbaleh
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
float donbaleh(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 5;
    else
        return ((donbaleh(n - 1) + donbaleh(n - 2)) * 1.0 / 2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%f", donbaleh(n));
}
