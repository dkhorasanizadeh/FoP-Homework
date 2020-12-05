/*
--------------------------------------------------
Name        : Argham yeki dar mian
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
void convertToArray(int number, char len, char *array)
{
    for (char i = len - 1; i >= 0; i--)
    {
        array[i] = number % 10;
        number = number / 10;
    }
}
int main(void)
{
    int temp, j = 0;
    char len;
    scanf("%d", &temp);
    if (temp == 0)
    {
        len = 1;
    }
    else
    {
        len = log10(temp) + 1;
    }
    char numOne[len], numTwo[len];
    convertToArray(temp, len, numOne);
    scanf("%d", &temp);
    convertToArray(temp, len, numTwo);
    if (numOne[0] == 0)
    {
        printf("%d", numTwo[0]);
        j = 1;
    }
    for (j; j < len; j++)
    {
        printf("%d", numOne[j]);
        printf("%d", numTwo[j]);
    }
}