/*
--------------------------------------------------
Name    : Question 2
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 16/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int zamin[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zamin[i]);
    }
    bool increasing = false, decreasing = false, check = false, posibble = true;
    if (zamin[0] > zamin[1])
    {
        decreasing = true;
    }
    else if (zamin[0] <= zamin[1])
    {
        increasing = true;
    }
    for (int i = 1; i < n; i++)
    {
        if ((zamin[i - 1] > zamin[i]) && decreasing)
        {
            continue;
        }
        else if ((zamin[i - 1] < zamin[i]) && increasing)
        {
            continue;
        }
        else if (zamin[i - 1] == zamin[i] && !check)
        {
            continue;
        }
        else if ((zamin[i - 1] > zamin[i]) && increasing && !check)
        {
            check = true;
            increasing = false;
            decreasing = true;
            continue;
        }
        else if ((zamin[i - 1] < zamin[i]) && decreasing && !check)
        {
            check = true;
            increasing = true;
            decreasing = false;
            continue;
        }
        else
        {
            posibble = false;
        }
    }
    if (posibble)
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    return 0;
}