/*
--------------------------------------------------
Name    : Polynomial
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 28/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
void reverseArray(char *array, char *reverse)
{
    char temp;
    int i, j, len;
    len = strlen(array);
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        reverse[i] = array[j];
    }
    reverse[i] = '\0';
}
void lowerCase(char *array)
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'A' && array[i] <= 'Z')
        {
            array[i] += 32;
        }
    }
}
int main(void)
{
    char string[3001], targetString[3001], reverseTargetString[3001], *substring;
    int count = 0;
    scanf("%[^\n]s", string);
    scanf("%s", targetString);
    lowerCase(string);
    lowerCase(targetString);
    reverseArray(targetString, reverseTargetString);
    int size = strlen(targetString);
    char *find, *findReverse, *stringPointer = string, *stringReversePointer = string;
    do
    {
        find = strstr(stringPointer, targetString);
        findReverse = strstr(stringReversePointer, reverseTargetString);
        if (find != NULL && !('a' <= *(find + size) && 'z' >= *(find + size)) && !('a' <= *(find - 1) && 'z' >= *(find - 1)))
        {
            count++;
            stringPointer = (find + size + 1);
        }
        else if (find != NULL)
        {
            stringPointer = (find + size + 1);
        }
        if (find = NULL && findReverse != NULL && !('a' <= *(findReverse + size) && 'z' >= *(findReverse + size)) && !('a' <= *(findReverse - 1) && 'z' >= *(findReverse - 1)))
        {
            count++;
            stringReversePointer = (findReverse + size + 1);
        }
        else if (findReverse != NULL)
        {
            stringReversePointer = (findReverse + size + 1);
        }
    } while (find != NULL || findReverse != NULL);
    printf("%d", count);
    return 0;
}