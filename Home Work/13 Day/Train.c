/*
--------------------------------------------------
Name    : Train
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 30/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compareFunction(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int min(int a, int b)
{
    return a <= b ? a : b;
}
int main(void)
{
    int k = 1, a, b, sum = 0, currentLocation;
    int start1 = 0, start2 = 0, end1 = 0, end2 = 0;
    scanf("%d%d%d", &k, &a, &b);
    if (a >= 0)
    {
        start1 = a + k - abs(a % k);
        start2 = a - abs(a % k);
    }
    else
    {
        start1 = a - a % k;
        start2 = a - (k + a % k);
    }
    if (b >= 0)
    {
        end1 = b + k - abs(b % k);
        end2 = b - abs(b % k);
    }
    else
    {
        end1 = b - b % k;
        end2 = b - (k + b % k);
    }
    int distances[4] = {
        abs(a - start1) + abs(b - end1) + abs(end1 - start1) / k,
        abs(a - start1) + abs(b - end2) + abs(end2 - start1) / k,
        abs(a - start2) + abs(b - end1) + abs(end1 - start2) / k,
        abs(a - start2) + abs(b - end2) + abs(end2 - start2) / k,
    };
    qsort(distances, 4, sizeof(int), compareFunction);
    printf("%d", min(abs(a - b), distances[0]));
    return 0;
}