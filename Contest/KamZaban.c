#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, i;
    scanf("%i", &n);
    scanf("%i", &m);
    char temp;
    char lang[15];
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &lang[i]);
    }
    lang[i] = '\0';
    char word[15];
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &word[i]);
    }
    word[i] = '\0';

    char *out = strstr(lang, word);
    if (out)
    {
        for (int i = 0; i < n; i++)
        {
            if (out == &lang[i])
            {
                printf("%i", i);
            }
        }
    }
    else
    {
        printf("%i", -1);
    }
}