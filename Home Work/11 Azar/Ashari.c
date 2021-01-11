/*
--------------------------------------------------
Name    : Ashari
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 24/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int count;
    float sum = 0, temp, min = 0, max = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%f", &temp);
        if (!i)
        {
            min = temp;
            max = temp;
        }
        sum = sum + temp;
        if (temp > max)
        {
            max = temp;
        }
        else if (temp < min)
        {
            min = temp;
        }
    }
    printf("Max: %.3f\nMin: %.3f\nAvg: %.3f", max, min, sum / count);
    return 0;
}