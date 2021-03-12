/*
--------------------------------------------------
Name    : Keyboard
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, j = 0;
    char capsOn = 0;
    char string[5] = {0}, final[100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", string);
        if (string[0] == 'C')
        {
            capsOn = !capsOn;
        }
        else
        {
            if (capsOn)
            {
                string[0] -= 32;
            }
            final[j++] = string[0];
        }
    }
    printf("%s", final);
    return 0;
}