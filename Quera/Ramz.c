/*
--------------------------------------------------
Name    : Ramz
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 12/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int findMin(int a, int b)
{
    return a < b ? a : b;
}
int search(char array[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (array[i] == target)
            return i;
}
int main(void)
{
    int n, index;
    scanf("%d", &n);
    char passkey[n];
    char passlist[n][9];
    int sum = 0;
    scanf("%s", passkey);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", passlist[i]);
        index = search(passlist[i], 9, passkey[i]);
        sum += findMin(9 - index, index);
    }
    printf("%d", sum);
    return 0;
}