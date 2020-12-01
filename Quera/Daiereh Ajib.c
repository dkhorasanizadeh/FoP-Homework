/*
--------------------------------------------------
Name    : Daiereh Ajib
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 27/Nov/2020
Link    : https://quera.ir/problemset/contest/34081/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-%D8%AF%D8%A7%DB%8C%D8%B1%D9%87-%D8%B9%D8%AC%DB%8C%D8%A8
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int j = 1, i = 0, k, n;
    scanf("%d%d", &n, &k);
    do
    {
        j += k;
        if (j > n)
        {
            j -= n;
        }
        i++;
    } while (j != 1);
    printf("%d", i);
    return 0;
}