#include <stdio.h>
int max(int a, int b)
{
    return a >= b ? a : b;
}
int main()
{
    int high = 0, count[100001] = {0}, n, result = 0;
    char check = 1;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        high = max(high, numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count[numbers[i]]++;
    }
    int counter = 0;
    for (int i = high; i >= 1 && check; i--)
    {
        int j = i;
        counter = 0;
        while (j <= high)
        {
            if (count[j] >= 2)
            {
                result = j;
                check = 0;
                break;
            }
            else if (count[j] == 1)
            {
                counter++;
            }
            j += i;
            if (counter == 2)
            {
                result = i;
                check = 0;
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}
