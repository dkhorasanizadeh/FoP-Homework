/*
--------------------------------------------------
Name    : Roman Numerals
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 01/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("I");
        break;
    case 2:
        printf("II");
        break;
    case 3:
        printf("III");
        break;
    case 4:
        printf("IV");
        break;
    case 5:
        printf("V");
        break;
    case 6:
        printf("VI");
        break;
    case 7:
        printf("VII");
        break;
    case 8:
        printf("VIII");
        break;
    case 9:
        printf("IX");
        break;
    case 10:
        printf("X");
        break;
    case 11:
        printf("XI");
        break;
    case 12:
        printf("XII");
        break;
    default:
        break;
    }
    return 0;
}