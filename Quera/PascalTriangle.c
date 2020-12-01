/*
--------------------------------------------------
Name    : Khayyam-Pascal Triangle
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 22/Nov/2020
Link    : https://quera.ir/problemset/contest/3410/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-%D9%85%D8%AB%D9%84%D8%AB-%D8%AE%DB%8C%D8%A7%D9%85-%D9%BE%D8%A7%D8%B3%DA%A9%D8%A7%D9%84
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