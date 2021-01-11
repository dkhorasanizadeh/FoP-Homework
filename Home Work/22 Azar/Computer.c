/*
--------------------------------------------------
Name    : Virus
Author  : Danial Khorasanizadeh
Course  : Foundations of programming
Date    : 08/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int sum = 0;
    char num[100000] = {0};
    scanf("%s", num);
    int i = 0;
    while (num[i] != '\0')
    {
        i++;
    }
    for (int j = 0; num[j] != '\0'; j++)
    {
        if (num[j] == '1')
        {
            sum += (int)pow(2, i - 1);
        }
        else if (num[j] > '1')
        {
            sum += (int)pow(2, i) - 1;
            break;
        }

        i--;
    }
    printf("%d", sum);
    return 0;
}