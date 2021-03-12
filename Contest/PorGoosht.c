#include <stdio.h>
#include <string.h>
int main()
{
    int satr, sotoon;
    scanf("%d %d", &satr, &sotoon);
    for (int z = 0; z < 2; z++)
    {
        int count = 0;
        for (int i = 0; i < satr; i++)
        {
            char qurme[sotoon + 1];
            scanf("%s", qurme);
            for (int j = 0; j < sotoon; j++)
                if (qurme[j] == '*')
                    count++;
        }
        printf("%d ", count);
    }
    return 0;
}