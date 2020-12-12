/*
--------------------------------------------------
Name    : Kaf Cake
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 11/Dec/2020
Link    : https://quera.ir/contest/assignments/15048/problems/50610
--------------------------------------------------
*/
#include <stdio.h>
int largest(int array[], int n)
{
    int i;
    int max = array[0];
    for (i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}
int smallest(int array[], int n)
{
    int i;
    int min = array[0];
    for (i = 1; i < n; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}
int main(void)
{
    int cakeCount, peopleCount;
    scanf("%d%d", &cakeCount, &peopleCount);
    int cakePrice[cakeCount];
    for (int i = 0; i < cakeCount; i++)
    {
        scanf("%d", &cakePrice[i]);
    }
    if (peopleCount == 1)
    {
        printf("%d", largest(cakePrice, cakeCount));
    }
    else if (peopleCount == 2)
    {
        printf("%d", (cakePrice[0] > cakePrice[cakeCount - 1] ? cakePrice[cakeCount - 1] : cakePrice[0]));
    }
    else
    {
        printf("%d", smallest(cakePrice, cakeCount));
    }

    return 0;
}