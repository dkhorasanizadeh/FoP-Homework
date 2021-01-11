#include <stdio.h>
#include <stdlib.h>
typedef struct _point
{
    int start;
    int end;
    int length;
} point;
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
int compare_s(const void *a, const void *b)
{

    point *pa = (point *)a;
    point *pb = (point *)b;

    return ((pa->length - pb->length) == 0) ? pa->end - pb->end : (pa->length - pb->length);
}
int main(void)
{
    int n, destinations[90] = {0};
    point p[4005];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &destinations[i]);
        for (int j = 0; j < i; j++)
        {
            if (destinations[i] == destinations[j])
            {
                n--;
                i--;
                break;
            }
        }
    }
    qsort(destinations, n, sizeof(int), cmpfunc);
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            p[pos].start = destinations[i];
            p[pos].end = destinations[j];
            p[pos].length = p[pos].start - p[pos].end;
            pos++;
        }
    }
    qsort(p, pos, sizeof(point), compare_s);
    for (int i = 0; i < pos; i++)
    {
        printf("[%d, %d]\n", p[i].end, p[i].start);
    }
    return 0;
}