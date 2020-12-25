/*
--------------------------------------------------
Name    : Quick Sort
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 19/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int sortPivot(int array[], int downIndex, int upIndex)
{
    int pivot = array[upIndex];
    int i = downIndex - 1;
    for (int j = downIndex; j < upIndex; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[upIndex]);
    return (i + 1);
}
void quickSort(int array[], int downIndex, int upIndex)
{
    if (downIndex < upIndex)
    {
        int partition = sortPivot(array, downIndex, upIndex);
        quickSort(array, downIndex, partition - 1);
        quickSort(array, partition + 1, upIndex);
    }
}
int main(void)
{
    int array[500000], i = 0;
    while (scanf("%d", &array[i]) != EOF)
    {
        i++;
    }
    quickSort(array, 0, i - 1);
    for (int j = 0; j < i; j++)
    {
        printf("%d ", array[j]);
    }
    return 0;
}