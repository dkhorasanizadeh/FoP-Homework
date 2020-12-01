/*
--------------------------------------------------
Name    : Azadi Baian dar Barareh
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 25/Nov/2020
Link    : https://quera.ir/problemset/contest/10162/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%D9%88%D8%B2-%D8%A2%D8%B2%D8%A7%D8%AF%DB%8C-%D8%A8%DB%8C%D8%A7%D9%86-%D8%AF%D8%B1-%D8%A8%D8%B1%D8%B1%D9%87
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int k;
    scanf("%d", &k);
    if (k % 2 == 0)
    {
        puts("Bala Barare");
    }
    else
    {
        puts("Payin Barare");
    }
    return 0;
}