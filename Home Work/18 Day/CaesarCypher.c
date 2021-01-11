/*
--------------------------------------------------
Name    : Caesar Cypher
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 02/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char mainString[5000];
    gets(mainString);
    for (int diffrence = 1; diffrence <= 26; diffrence++)
    {
        char string[] = "zozagtoor";
        for (int i = 0; string[i] != '\0'; i++)
        {
            int tempChar = string[i];
            tempChar += diffrence;
            if (tempChar > 'z')
            {
                tempChar -= 26;
            }
            string[i] = tempChar;
        }
        if (strstr(mainString, string) != NULL)
        {
            for (int i = 0; mainString[i] != '\0'; i++)
            {
                if (mainString[i] >= 'a' && mainString[i] <= 'z' || mainString[i] >= 'A' && mainString[i] <= 'Z')
                {
                    int tempChar = mainString[i];
                    tempChar -= diffrence;
                    if (tempChar < 'a')
                    {
                        tempChar += 26;
                    }
                    mainString[i] = tempChar;
                }
            }
            printf("%s", mainString);
            break;
        }
    }
    return 0;
}