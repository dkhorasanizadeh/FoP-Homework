/*
--------------------------------------------------
Name    : Khodahafezi :'(
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 10/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n;
    char names[100][21] = {0};
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%s: salam %s!\n", names[i], names[j - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s: khodafez bacheha!\n", names[i]);
        for (int j = i + 1; j < n; j++)
        {
            printf("%s: khodafez %s!\n", names[j], names[i]);
        }
    }
    return 0;
}