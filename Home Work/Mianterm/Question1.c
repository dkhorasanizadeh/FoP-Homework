/*
--------------------------------------------------
Name    : Question 1
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 16/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n + 4];
    for (int i = 0, j = 0; i <= n; i)
    {
        if (j < 10)
        {
            arr[i] = i;
            j++;
            i += 1;
        }
        else if (j < 100)
        {
            arr[i + 1] = j % 10;
            arr[i] = j / 10;
            j++;
            i += 2;
        }
        else if (j < 1000)
        {
            arr[i + 2] = j % 10;
            arr[i + 1] = j / 10 % 10;
            arr[i] = j / 100;
            j++;
            i += 3;
        }
        else if (j < 10000)
        {
            arr[i + 3] = j % 10;
            arr[i + 2] = j / 10 % 10;
            arr[i + 1] = j / 100 % 10;
            arr[i] = j / 1000;
            j++;
            i += 4;
        }
    }
    printf("%d", arr[n]);
    return 0;
}