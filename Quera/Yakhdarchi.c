/*
--------------------------------------------------
Name    : Yakhdarchi
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 11/Dec/2020
Link    : https://quera.ir/problemset/contest/3429
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int temprature;
    scanf("%d", &temprature);
    if (temprature < 0)
    {
        puts("Ice");
    }
    else if (temprature > 100)
    {
        puts("Steam");
    }
    else
    {
        puts("Water");
    }
    return 0;
}