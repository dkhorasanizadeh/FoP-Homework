/*
--------------------------------------------------
Name    : Loknat
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 15/Dec/2020
Link    : https://quera.ir/problemset/contest/2530/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    char word[20];
    int count = 1;
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'T' || word[i] == 'D' || word[i] == 'L' || word[i] == 'F')
        {
            count *= 2;
        }
    }
    printf("%d", count);
    return 0;
}