/*
--------------------------------------------------
Name    : Sort string of names
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 20/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
char isItUppercase(char a)
{
    return (a >= 'A' && a <= 'Z') ? 1 : 0;
}
char absoluteValue(char a)
{
    return a < 0 ? -a : a;
}
char toLower(char a)
{
    return (a >= 'A' && a <= 'Z') ? a + 32 : a;
}
void swap(char *array1, char *array2)
{
    char temp[1001];
    strcpy(temp, array1);
    strcpy(array1, array2);
    strcpy(array2, temp);
}
void sort(char array[][1001], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (isItUppercase(array[j][0]) == isItUppercase(array[j + 1][0]))
            {
                if (array[j][0] == array[j + 1][0])
                {
                    if (isItUppercase(array[j][1]) == isItUppercase(array[j + 1][1]))
                    {
                        if (array[j][1] > array[j + 1][1])
                        {
                            swap(array[j], array[j + 1]);
                        }
                    }
                    else
                    {
                        if (toLower(array[j][1]) == toLower(array[j + 1][1]) && array[j][1] > array[j + 1][1])
                        {
                            swap(array[j], array[j + 1]);
                        }
                        else if (toLower(array[j][1]) > toLower(array[j + 1][1]))
                        {
                            swap(array[j], array[j + 1]);
                        }
                    }
                }
                else if (array[j][0] > array[j + 1][0])
                {
                    swap(array[j], array[j + 1]);
                }
            }
            else
            {
                if (toLower(array[j][0]) == toLower(array[j + 1][0]) && array[j][0] > array[j + 1][0])
                {
                    swap(array[j], array[j + 1]);
                }
                else if (toLower(array[j][0]) > toLower(array[j + 1][0]))
                {
                    swap(array[j], array[j + 1]);
                }
            }
        }
    }
}
int main(void)
{
    char names[1001][1001];
    int i = 0;
    do
    {
        scanf("%s", names[i]);
    } while (names[i++][0] != '0');
    sort(names, i - 1);
    for (int j = 0; j < i - 1; j++)
    {
        printf("%s ", names[j]);
    }
    return 0;
}