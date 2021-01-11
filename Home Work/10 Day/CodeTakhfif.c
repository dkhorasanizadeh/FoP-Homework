/*
--------------------------------------------------
Name    : Code Takhfif
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 26/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int originalCharacters[128] = {0}, n, counter = 0;
    char originalString[101], compareString[101];
    scanf("%d %s", &n, originalString);
    for (int i = 0; originalString[i] != '\0'; i++)
    {
        originalCharacters[originalString[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", compareString);
        int compareCharacters[128] = {0};
        for (int j = 0; compareString[j] != '\0'; j++)
        {
            compareCharacters[compareString[j]] = 1;
        }
        if (memcmp(originalCharacters, compareCharacters, sizeof(int) * 128) == 0)
        {
            puts("Yes");
        }
        else
        {
            puts("No");
        }
    }
    return 0;
}