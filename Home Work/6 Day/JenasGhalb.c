/*
--------------------------------------------------
Name    : Jenas Ghalb
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 22/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char toLower(char a)
{
    return a >= 'A' && a <= 'Z' ? a + 32 : a;
}
bool isPalindrome(char *start, char *end)
{
    if (!((toLower(*start) >= 'a' && toLower(*start) <= 'z') || (*start >= '0' && *start <= '9')))
        while (!((toLower(*start) >= 'a' && toLower(*start) <= 'z') || (*start >= '0' && *start <= '9')))
        {
            start += 1;
        }
    while (!((toLower(*end) >= 'a' && toLower(*end) <= 'z') || (*end >= '0' && *end <= '9')))
    {
        end -= 1;
    }
    if (start >= end)
    {
        return true;
    }
    else if (toLower(*start) == toLower(*end))
    {
        isPalindrome(start + 1, end - 1);
    }
    else
    {
        return false;
    }
}
int main(void)
{
    char string[100000];
    scanf("%[^\n]s", string);
    printf("%s", isPalindrome(string, string + strlen(string) - 1) ? "YES" : "NO");
    return 0;
}