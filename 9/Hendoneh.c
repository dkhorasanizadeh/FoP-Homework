/*
--------------------------------------------------
Name    : Hendoneh Khoori
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int lastHendoneh(int n, int weight[], int i, int j)
{
    if (j == n - 1)
    {
        if (weight[i] > weight[j])
        {
            return i + 1;
        }
        else
        {
            return j + 1;
        }
    }
    else
    {
        if (weight[i] > weight[j])
        {
            return lastHendoneh(n, weight, i, j + 1);
        }
        else
        {
            return lastHendoneh(n, weight, j, j + 1);
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
    }
    printf("%d", lastHendoneh(n, weight, 0, 1));
    return 0;
}