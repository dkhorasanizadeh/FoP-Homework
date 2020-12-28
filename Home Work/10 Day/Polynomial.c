/*
--------------------------------------------------
Name    : Polynomial
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 27/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int finalPolynomial[500];
void reverseArray(int *array, int size)
{
    int temp;
    int len = size + 1, i, k;
    for (i = 0, k = len - 1; i < (len / 2); i++, k--)
    {
        temp = array[k];
        array[k] = array[i];
        array[i] = temp;
    }
}
int *coefficientFinder(int *initialPolynomial, int m, int n)
{
    int workingArray1[500] = {0};
    memcpy(workingArray1, initialPolynomial, sizeof(int) * m + 1);
    for (int i = 1; i < n; i++)
    {
        int workingArray2[500] = {0};
        for (int j = i * m; j >= 0; j--)
        {
            for (int k = m; k >= 0; k--)
            {
                workingArray2[k + j] += workingArray1[j] * initialPolynomial[k];
            }
        }
        memcpy(workingArray1, workingArray2, sizeof(int) * (m * n + 1));
    }
    memcpy(finalPolynomial, workingArray1, sizeof(int) * (m * n + 1));
}
int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    int initialPolynomial[m + 1];
    for (int i = 0; i <= m; i++)
    {
        scanf("%d", &initialPolynomial[i]);
    }
    reverseArray(initialPolynomial, m);
    int *adress = coefficientFinder(initialPolynomial, m, n);
    for (int i = m * n; i >= 0; i--)
    {
        printf("%d ", *(adress + i));
    }
    return 0;
}