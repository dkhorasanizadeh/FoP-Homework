/*
--------------------------------------------------
Name    : Simple
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
    char string[3];
    int a, b, c, temp;
    scanf("%d%d%d %s", &a, &b, &c, string);
    sortThreeNumbers(&a, &b, &c);
    for (int i = 0; i < 3; i++)
    {
        if (string[i] == 'A')
        {
            printf("%d ", a);
        }
        else if (string[i] == 'B')
        {
            printf("%d ", b);
        }
        else if (string[i] == 'C')
        {
            printf("%d ", c);
        }
    }
    return 0;
}