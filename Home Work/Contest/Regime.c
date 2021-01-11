#include <stdio.h>
int main(void)
{
    char barchasb[6];
    char count[3] = {0};
    scanf("%s", barchasb);
    for (int i = 0; i < 5; i++)
    {
        switch (barchasb[i])
        {
        case 'R':
            count[0]++;
            break;
        case 'Y':
            count[1]++;
            break;
        case 'G':
            count[2]++;
            break;
        }
    }
    if (count[0] >= 3 || (count[0] >= 2 && count[1] >= 2) || count[2] == 0)
    {
        printf("nakhor lite");
    }
    else
    {
        printf("rahat baash");
    }
    return 0;
}