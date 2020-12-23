/*
--------------------------------------------------
Name    : Danial
Author  : Danial Khorasanizadeh
Course  : Foundations of programming(Fall 99)
Date    : 16/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *copy(char *string, char key[1001], int count)
{
    char newKey[1001] = {0};
    for (int i = 0; i < count; i++)
    {
        strcat(newKey, key);
    }
    for (int i = 0; i < strlen(newKey); i++)
    {
        string[i] = newKey[i];
    }
}
bool substr(char *string, char key[1001], int targetCount)
{
    int count = 0;
    for (int i = 0; i <= strlen(string) - strlen(key); i++)
    {
        int j;
        for (j = 0; j < strlen(key); j++)
            if (string[i + j] != key[j])
                break;
        if (j == strlen(key))
        {
            count++;
            j = 0;
        }
    }
    if (count == targetCount)
    {
        return true;
    }
    return false;
}
int main(void)
{
    char mashkook[1001], command[8];
    int commandsCount = 0, goodness = 0;
    scanf("%s", mashkook);
    while (strcmp(command, "Is") != 0)
    {
        scanf("%s ", command);
        if (strcmp("copy", command) == 0)
        {
            char key[1001] = {0};
            int count = 0;
            scanf("%s %d", key, &count);
            copy(mashkook, key, count);
            commandsCount++;
        }
        else if (strcmp("compare", command) == 0)
        {
            char key[1001] = {0};
            scanf("%s", key);
            if (strcmp(key, mashkook) == 0)
            {
                goodness++;
            }
            commandsCount++;
        }
        else if (strcmp("substr", command) == 0)
        {
            char key[1001] = {0};
            int count = 0;
            scanf("%s %d", key, &count);
            if (substr(mashkook, key, count))
            {
                goodness++;
            }
            commandsCount++;
        }
        else if (strcmp("attach", command) == 0)
        {
            char key[1001] = {0}, str[1001] = {0};
            int count = 0;
            scanf("%s %d %s", key, &count, str);
            strcat(key, str);
            if (substr(mashkook, key, count))
            {
                goodness++;
            }
            commandsCount++;
        }
        else if (strcmp("length", command) == 0)
        {
            int count = 0;
            scanf("%d", &count);
            if (strlen(mashkook) == count)
            {
                goodness++;
            }
            commandsCount++;
        }
    }
    if (goodness >= (float)commandsCount / 2)
    {
        printf("Eyval");
    }
    else
    {
        printf("HeifShod");
    }
    return 0;
}