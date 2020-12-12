/*
--------------------------------------------------
Name    : Esmha
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 08/Dec/2020
Link    : https://quera.ir/problemset/contest/2529/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int countTable[26] = {0};
        char name[20];
        int temp = 0;
        scanf("%s", name);
        for (int j = 0; name[j] != '\0'; j++)
        {
            countTable[name[j] - 97]++;
        }
        for (int k = 0; k < 26; k++)
        {
            if (countTable[k] >= 1)
            {
                temp++;
            }
        }
        if (temp > max)
        {
            max = temp;
        }
    }
    printf("%d", max);
    return 0;
}