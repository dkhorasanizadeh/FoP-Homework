/*
--------------------------------------------------
Name    : Brute Force Hello, World!
Author  : Danial Khorasanizadeh
Course  : WTF is wrong with me?
Date    : 22/Nov/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}
int main(void)
{
    char HelloWorld[13] = "Hello, World!";
    int i = 0;
    char randomChar;
    while (i < 13)
    {
        srand(time(0));
        randomChar = random(32, 126);
        printf("%c", randomChar);

        if (randomChar == HelloWorld[i])
        {
            i++;
        }
        else
        {
            printf("\b");
        }
    }
    return 0;
}