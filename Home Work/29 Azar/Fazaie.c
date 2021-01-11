/*
--------------------------------------------------
Name    : Fazaie substring
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 16/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *makeSubstring(int start, int end, char *array, char string[51])
{
    int j = 0;
    for (int i = start; i <= end; i++)
    {
        array[j++] = string[i];
    }
    array[j] = '\0';
}
char *reverseArray(char *reverseArray, char array[51])
{
    int j = 0;
    for (int i = strlen(array) - 1; i >= 0; i--)
    {
        reverseArray[j++] = array[i];
    }
    reverseArray[j] = '\0';
}
int main(void)
{
    int n, start = 0, end = 1;
    scanf("%d", &n);
    char strings[20][51], reverseStrings[20][51], currentSubstring[51] = {0}, longestSubstring[51] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", strings[i]);
        reverseArray(reverseStrings[i], strings[i]);
    }
    for (int i = 0; i < strlen(strings[0]); i++)
    {
        for (int j = i; j < strlen(strings[0]); j++)
        {
            makeSubstring(i, j, currentSubstring, strings[0]);
            int k;
            for (k = 1; k < n; k++)
            {
                if ((strstr(strings[k], currentSubstring) == NULL) && (strstr(reverseStrings[k], currentSubstring) == NULL))
                {
                    break;
                }
            }
            if (k == n && strlen(currentSubstring) > strlen(longestSubstring))
            {
                strcpy(longestSubstring, currentSubstring);
            }
        }
    }
    printf("%s", longestSubstring);
    return 0;
}