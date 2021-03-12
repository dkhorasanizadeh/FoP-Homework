/*
--------------------------------------------------
Name    : Quiz 2
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 06/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, p, q;
    scanf("%d%d%d", &n, &p, &q);
    char substrings[n][p + q + 1];
    int lastIndex, index;
    for (int i = 0; i < n; i++)
    {
        char temp[100];
        scanf("%s", temp);
        for (int j = 0; j < p; j++)
        {
            substrings[i][j] = temp[j];
        }
        lastIndex = strlen(temp) - 1;
        for (int j = 0; j < q; j++)
        {
            substrings[i][j + p] = temp[lastIndex - q + j + 1];
        }
        substrings[i][p + q] = '\0';
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!strcmp(substrings[i], substrings[j]))
            {
                substrings[j][0] = '\0';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (strlen(substrings[i]) > 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}