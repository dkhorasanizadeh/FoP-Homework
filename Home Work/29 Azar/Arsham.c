/*
--------------------------------------------------
Name    : Arsham
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 15/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int findRange(int i)
{
    int count = 0;
    while (i > 0)
    {
        i -= (int)pow(2, (int)log2(i));
        count++;
    }
    return count;
}
int main(void)
{
    int n, origin, destination;
    scanf("%d", &n);
    char street[1000] = {0};
    int sum = 0, count = 0;
    scanf("%s", street);
    scanf("%d%d", &origin, &destination);
    if (origin > destination)
    {
        origin = origin + destination;
        destination = origin - destination;
        origin = origin - destination;
    }
    for (int i = origin - 1; i <= destination - 1; i++)
    {
        if (street[i] == 'H')
        {
            count++;
        }
        else if (street[i] = 'P')
        {
            sum += findRange(count);
            count = 0;
        }
    }
    printf("%d", sum);
    return 0;
}