/*
--------------------------------------------------
Name    : Find Max
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int maxSood = 0;
int findMax(int a, int b)
{
    if (a != b)
    {
        return a > b ? a : b;
    }
    else
    {
        return a;
    }
}
int max(int array[], int size, int i)
{
    int maxNow = 0;
    if (i == 0)
    {
        maxSood = findMax(maxSood, array[i]);
        return array[i];
    }
    maxNow = findMax(array[i], array[i] + max(array, size, i - 1));
    maxSood = findMax(maxSood, maxNow);
    return maxNow;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    max(array, n, n - 1);
    printf("%d", maxSood);
    return 0;
}