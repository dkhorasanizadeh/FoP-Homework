/*
--------------------------------------------------
Name    : Chideman
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 22/Dec/2020
Link    : https://quera.ir/problemset/contest/2534/
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    long long int n, average = 0, minutes = 0;
    scanf("%lld", &n);
    long long int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &nums[i]);
        average += nums[i];
    }
    average /= n;
    for (int i = 0; i < n; i++)
    {
        nums[i] -= average;
        if (nums[i] > 0)
        {
            minutes += nums[i];
        }
    }
    printf("%lld", minutes);
    return 0;
}