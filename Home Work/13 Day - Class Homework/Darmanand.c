/*
--------------------------------------------------
Name    : Darmanand
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 23/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n;
    char names[100][21] = {0};
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (int i = 0; i + 1 < n; i++)
    {
        printf("%s to %s: ke ba in dar agar dar bande dar manand, dar manand.\n", names[i], names[i + 1]);
        for (int j = i + 1; j > 0; j--)
        {
            printf("%s to %s: dar manand?\n", names[j], names[j - 1]);
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%s to %s: dar manand.\n", names[j], names[j + 1]);
        }
    }
    return 0;
}