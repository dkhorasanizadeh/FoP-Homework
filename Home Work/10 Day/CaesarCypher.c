/*
--------------------------------------------------
Name    : Caesar Cypher
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 26/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char actual, code, string[71];
    scanf("%c %c %s", &actual, &code, string);
    int diffrence = code - actual;
    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] -= diffrence;
        printf("%c", string[i] < 'a' ? string[i] + 26 : string[i]);
    }
    return 0;
}