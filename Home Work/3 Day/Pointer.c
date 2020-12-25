/*
--------------------------------------------------
Name    : Pointer
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 20/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#define SIZE 100

void read(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", array + i);
    //scanf function takes a pointer. but "*array+i" is a value.
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    //temp should be a value and function should change the value of a and b not their adresses.
}
void print(const int *array, int size)
{
    //"const int *array[]" is a pointer to another pointer
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", *(array + i));
    //"**(array+i)" is the value stored in "*(array+i)" adress but we want the value stored in "array+i" adress.
}

void sort(int array[], const int *size)
{
    //function input in main is a pointer to size so "const int size" is wrong.
    int *end = array + *size, *i, *j;
    //"*end" is a pointer to end of the array so it should take the value of size.
    //"i" should be a pointer because it points to adress of the array in the loop.
    for (i = array; i != end - 1; i++)
        for (j = array; j != end - 1; j++)
            //bubble sort consists of two loops.
            if (*j > *(j + 1))
                //j and j+1 values should be compared not the adresses.
                swap(j, j + 1);
}

int isSorted(const int array[], const int *size)
{
    int i;
    for (i = 0; i < *size - 1; i++)
        if (*(array + i) > *(array + i + 1))
            return 0;
    return 1;
}

int main()
{
    int arr[SIZE], len;
    scanf("%d", &len);
    read(arr, len);
    sort(arr, &len);
    printf("%s\n", isSorted(arr, &len) ? "All is good!" : "This isn't going as it's supposed to...");
    print(arr, len);
    return 0;
}