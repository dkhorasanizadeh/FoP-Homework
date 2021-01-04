/*
--------------------------------------------------
Name    : Sum of Large Numbers
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
Date    : 08/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int max = 1;
char *reverseArray(char *array)
{
    char temp;
    int len, i, k;
    for (len = 0; array[len] != '\0'; len++)
        ;
    if (max < len)
    {
        max = len;
    }
    for (i = 0, k = len - 1; i < (len / 2); i++, k--)
    {
        temp = array[k];
        array[k] = array[i];
        array[i] = temp;
    }
}
void SumOfNumbers(int n, char array[n][500], char sumArray[600])
{
    int carry = 0, j, sum;
    for (j = 0; j <= max - 1; j++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i][j] > 0)
            {
                sum += (array[i][j] - '0');
            }
        }
        sum += carry;
        carry = sum / 10;
        sumArray[j] = (sum % 10) + '0';
    }
    if (carry > 0)
    {
        sumArray[j++] = (carry % 10) + '0';
        if (carry /= 10)
        {
            sumArray[j] = carry + '0';
        }
    }
    reverseArray(sumArray);
}
int main(void)
{
    int n;
    char string[20][500] = {0}, sumString[600] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", string[i]);
        reverseArray(string[i]);
    }
    SumOfNumbers(n, string, sumString);
    printf("%s", sumString);
    return 0;
}