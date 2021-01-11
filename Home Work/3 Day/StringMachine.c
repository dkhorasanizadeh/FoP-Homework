/*
--------------------------------------------------
Name    : String Machine
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 20/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
void shiftRight(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        char temp = string[strlen(string) - 1], j;
        for (j = strlen(string) - 1; j > 0; j--)
            string[j] = string[j - 1];
        string[j] = temp;
    }
}
void shiftLeft(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        char temp = string[0], j;
        for (j = 0; j < strlen(string) - 1; j++)
            string[j] = string[j + 1];
        string[j] = temp;
    }
}
void extend(char *string, int length)
{
    int j = strlen(string), i;
    for (i = j; i < j + length; i++)
    {
        string[i] = '*';
    }
    string[i] = '\0';
}
void shrink(char *string, int length)
{
    if (length >= strlen(string))
    {
        string[0] = '\0';
    }
    else
    {
        string[strlen(string) - length] = '\0';
    }
}
void reverse(char *string)
{
    char temp;
    int len = strlen(string), i, k;
    for (i = 0, k = len - 1; i < (len / 2); i++, k--)
    {
        temp = string[k];
        string[k] = string[i];
        string[i] = temp;
    }
}
void put(char *string, int location, char character)
{
    string[location - 1] = character;
}
void print(char *string)
{
    printf("%s\n", string);
}
int main(void)
{
    char string[1001], command[8];
    scanf("%[^\n]s", string);
    while (strcmp(command, "EXIT") != 0)
    {
        scanf("%s", command);
        if (strcmp("SHIFT-R", command) == 0)
        {
            int length = 0;
            scanf(" %d", &length);
            shiftRight(string, length);
        }
        else if (strcmp("SHIFT-L", command) == 0)
        {
            int length = 0;
            scanf(" %d", &length);
            shiftLeft(string, length);
        }
        else if (strcmp("EXTEND", command) == 0)
        {
            int length = 0;
            scanf(" %d", &length);
            extend(string, length);
        }
        else if (strcmp("SHRINK", command) == 0)
        {
            int length = 0;
            scanf(" %d", &length);
            shrink(string, length);
        }
        else if (strcmp("REVERSE", command) == 0)
        {
            reverse(string);
        }
        else if (strcmp("PUT", command) == 0)
        {
            int location = 0;
            char character;
            scanf(" %d %c", &location, &character);
            put(string, location, character);
        }
        else if (strcmp("PRINT", command) == 0)
        {
            print(string);
        }
    }
    return 0;
}