/*
--------------------------------------------------
Name    : Farzade Filmbin
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 08/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n, check = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char name[1000];
        scanf("\n%[^\n]s", name);
        for (int j = 0; name[j] != '\0'; j++)
        {
            if (j == 0)
            {
                if (name[j] >= 'a' && name[j] <= 'z')
                {
                    name[j] -= 32;
                }
                continue;
            }
            if (name[j] == ' ')
            {
                j++;
                if (name[j] >= 'a' && name[j] <= 'z')
                {
                    name[j] -= 32;
                    continue;
                }
            }
            else if (name[j] >= 'A' && name[j] <= 'Z')
            {
                name[j] += 32;
            }
        }
        printf("%s\n", name);
    }
    return 0;
}