/*
--------------------------------------------------
Name    : Sade tar
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 24/Nov/2020
Link    : https://quera.ir/problemset/contest/3403/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%D8%A7%D8%AF%D9%87-%D8%AA%D8%B1
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    float num[4], sum = 0, product = 1, min, max;
    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &min);
        num[i] = min;
        sum = sum + num[i];
        product = product * num[i];
    }
    min = num[0];
    max = num[0];
    for (int j = 1; j < 4; j++)
    {
        if (num[j] > max)
        {
            max = num[j];
        }
        else if (num[j] < min)
        {
            min = num[j];
        }
    }
    printf("Sum : %.6f\nAverage : %.6f\nProduct : %.6f\nMAX : %.6f\nMIN : %.6f", sum, sum / 4, product, max, min);
    return 0;
}