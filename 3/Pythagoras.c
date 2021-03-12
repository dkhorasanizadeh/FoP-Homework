/*
--------------------------------------------------
Name    : Pythagoras
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 21/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
void sortThreeNumbers(int *one, int *two, int *three)
{
    int temp;
    if (*one > *two)
    {
        temp = *one;
        *one = *two;
        *two = temp;
    }
    if (*two > *three)
    {
        temp = *two;
        *two = *three;
        *three = temp;
    }
    if (*one > *two)
    {
        temp = *one;
        *one = *two;
        *two = temp;
    }
}
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sortThreeNumbers(&a, &b, &c);
    if (c * c == a * a + b * b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}