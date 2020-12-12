/*
--------------------------------------------------
Name    : Bolandgoo
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 09/Dec/2020
Link    : https://quera.ir/problemset/contest/3430/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    char string[20];
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", string[i]);
        }
        for (int k = i + 1; string[k] != '\0'; k++)
        {
            printf("%c", string[k]);
        }
        printf("\n");
    }
    return 0;
}