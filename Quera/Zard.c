/*
--------------------------------------------------
Name    : Zard
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 21/Nov/2020
Link    : https://quera.ir/problemset/contest/3537/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B3%D9%88%D8%A7%D9%84-%D8%B2%D8%B1%D8%AF
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int count;
    scanf("%d", &count);
    printf("W");
    while (count > 0)
    {
        printf("o");
        count--;
    }
    printf("w!");
    return 0;
}