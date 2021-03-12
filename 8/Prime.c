/*
--------------------------------------------------
Name    : Truncutable Prime
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 08/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(long int n)
{
    if (n != 2 && n % 2 == 0)
    {
        return false;
    }
    if (n != 3 && n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i < sqrt(n); i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    int power, n;
    scanf("%d", &n);
    power = (int)pow(10, n - 1);
    for (int i = 2 * power + 1; i < power * 8; i += 2)
    {
        switch (i / power)
        {
        case 2:
        case 3:
        case 5:
        case 7:
            break;
        default:
            i += power;
            continue;
        }
        int temp = i;
        bool check = true;
        while (temp > 10 && check)
        {
            switch (temp % 10)
            {
            case 1:
            case 3:
            case 7:
            case 9:
                break;
            default:
                check = false;
                break;
            }
            temp /= 10;
        }
        temp = i;
        while (check && temp > 0)
        {
            check = isPrime(temp);
            temp /= 10;
        }
        if (check)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}