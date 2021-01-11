/*
--------------------------------------------------
Name    : Arsalan String
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
char findSubstring(char string[101], char substring[101])
{
    char check, len1, len2;
    for (len1 = 0; string[len1] != '\0'; len1++)
        ;
    len1--;
    for (len2 = 0; substring[len2] != '\0'; len2++)
        ;
    len2--;
    for (int i = 0; i < len1 - len2; i++)
    {
        for (int j = i, counter = 0; string[j] != '\0'; j++)
        {
            if (string[j] == substring[counter] || string[j] + 32 == substring[counter])
            {
                counter++;
            }
            if (substring[counter] == '\0')
            {
                return 1;
            }
        }
    }
    return 0;
}
int main(void)
{
    char substring[101], string[101];
    int n, conut = 0;
    scanf("%s", substring);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", string);
        if (findSubstring(string, substring))
        {
            conut++;
        }
    }
    printf("%d", conut);
    return 0;
}