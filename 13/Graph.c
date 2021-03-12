/*
--------------------------------------------------
Name    : Graph
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 26/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int compareFunction(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main(void)
{
    int n, count = 0;
    scanf("%d", &n);
    int vertices[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vertices[i]);
    }
    qsort(vertices, n, sizeof(int), compareFunction);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(vertices[i] - vertices[j]) == 1)
            {
                count++;
            }
            else if (abs(vertices[i] - vertices[j]) > 1)
            {
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}