/*
--------------------------------------------------
Name    : Go Go Go!
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int count(int target)
{
    int sum = 0;
    if (target - 1 >= 0)
    {
        sum += count(target - 1);
    }
    if (target - 2 >= 0)
    {
        sum += count(target - 2);
    }
    if (target - 5 >= 0)
    {
        sum += count(target - 5);
    }
    if (target == 0)
    {
        return 1;
    }
    return sum;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", count(n));
    return 0;
}