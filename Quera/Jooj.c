/*
--------------------------------------------------
Name    : Jooj
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 09/Dec/2020
Link    : https://quera.ir/problemset/contest/72875/
--------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int n;
    bool flag = true;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if ((number[i] > number[i - 1]) && (number[i] > number[i + 1]))
        {
            flag = false;
        }
    }
    if (flag)
    {
        puts("Bah Bah! Ajab jooji!");
    }
    else
    {
        puts("Ey baba :(");
    }

    return 0;
}