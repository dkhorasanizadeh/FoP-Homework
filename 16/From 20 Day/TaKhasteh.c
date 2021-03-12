/*
--------------------------------------------------
Name    : Ta Khasteh
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 10/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[100001], finalString[100001];
    int cursor = 0;
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '=' && cursor > 0)
        {
            finalString[cursor] = '\0';
            cursor--;
        }
        else if (string[i] != '=')
        {
            finalString[cursor++] = string[i];
        }
    }
    finalString[cursor] = '\0';
    printf("%s", finalString);
    return 0;
}