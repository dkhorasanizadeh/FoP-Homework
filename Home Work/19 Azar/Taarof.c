/*
--------------------------------------------------
Name    : Taarof
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
void taarof(void)
{
    puts("Asghar Agha befarma!");
}
int main(void)
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        taarof();
        n--;
    }
    return 0;
}