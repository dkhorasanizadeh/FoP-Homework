/*
--------------------------------------------------
Name    : Hendoneh Khoori
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 26/Nov/2020
Link    : https://quera.ir/problemset/contest/35253/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D9%87%D9%86%D8%AF%D9%88%D9%86%D9%87%D8%AE%D9%88%D8%B1%DB%8C
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
    }
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (weight[i] > weight[j])
        {
            j = i;
        }
    }
    printf("%d", j + 1);
    return 0;
}