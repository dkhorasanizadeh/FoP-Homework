/*
--------------------------------------------------
Name    : Kitchen
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 05/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
void waiter(int money, char order);
void coordinator(char order);
void cook(char order);
int pea, potato, meat;
char cookFalafel, cookPotato, cookMeat;
int main(void)
{
    int n, money;
    char order;
    scanf("%d %d %d\n%c %c %c\n%d", &pea, &potato, &meat, &cookFalafel, &cookPotato, &cookMeat, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &money, &order);
        waiter(money, order);
    }
    return 0;
}
void waiter(int money, char order)
{
    if (order == 'f' && money >= 6000)
    {
        coordinator('f');
    }
    else if (order == 's' && money >= 18000)
    {
        coordinator('s');
    }
    else if (order == 'd' && money >= 30000)
    {
        coordinator('d');
    }
    else
    {
        puts("No enough money");
    }
}
void coordinator(char order)
{
    if (order == 'f' && cookFalafel == 'p')
    {
        cook('f');
    }
    else if (order == 's' && cookPotato == 'p')
    {
        cook('s');
    }
    else if (order == 'd' && cookMeat == 'p')
    {
        cook('d');
    }
    else
    {
        puts("Not a chef");
    }
}
void cook(char order)
{
    if (order == 'f' && pea > 0)
    {
        puts("Food is ready");
        pea--;
    }
    else if (order == 's' && potato > 0)
    {
        puts("Food is ready");
        potato--;
    }
    else if (order == 'd' && meat > 0)
    {
        puts("Food is ready");
        meat--;
    }
    else
    {
        puts("Material is not enough");
    }
}