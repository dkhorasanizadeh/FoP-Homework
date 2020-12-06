/*
--------------------------------------------------
Name    : Khayyam-Pascal Triangle
Author  : Danial Khorasanizadeh
Course  : Foundations of programmung (Fall 99)
Date    : 01/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int binomialCoefficients(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficients(n - 1, k - 1) + binomialCoefficients(n - 1, k);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", binomialCoefficients(i, j));
            if (j == i)
            {
                printf("\n");
            }
        }
    }
    return 0;
}