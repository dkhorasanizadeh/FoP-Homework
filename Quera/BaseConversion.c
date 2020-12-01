/*
--------------------------------------------------
Name    : Alpha Centaury(Base Conversion)
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 23/Nov/2020
Link    : https://quera.ir/problemset/university/66859/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D9%BE%D8%A7%DB%8C%DB%8C%D8%B2-%DB%B9%DB%B8-%D8%A2%D9%84%D9%81%D8%A7-%D9%82%D9%86%D8%B7%D9%88%D8%B1%D8%B3
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    long number;
    int base, i = 0;
    char inOtherBase[50];
    scanf("%d%d", &number, &base);
    while (number > 0)
    {
        inOtherBase[i] = number % base;
        number = number / base;
        i++;
    }
    i--;
    while (i >= 0)
    {
        switch (inOtherBase[i])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", inOtherBase[i]);
            break;
        }
        i--;
    }
    return 0;
}