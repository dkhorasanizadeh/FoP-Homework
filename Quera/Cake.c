/*
--------------------------------------------------
Name    : Cake
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 25/Nov/2020
Link    : https://quera.ir/problemset/contest/41172/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-cake
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int width, numberOfPieces, area = 0;
    scanf("%d %d", &width, &numberOfPieces);
    int widths[numberOfPieces], lengths[numberOfPieces];
    for (int i = 0; i < numberOfPieces; i++)
    {
        scanf("%d%d", &widths[i], &lengths[i]);
    }
    for (int j = 0; j < numberOfPieces; j++)
    {
        area = area + (widths[j] * lengths[j]);
    }
    printf("%d", area / width);
    return 0;
}