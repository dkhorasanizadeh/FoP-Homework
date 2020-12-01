/*
--------------------------------------------------
Name    : Changiz2
Author  : Danial Khorasanizadeh
Course  : Foundations of Programming (Fall 99)
--------------------------------------------------
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y;
    int distance;
    scanf("%f %f", &x, &y);
    distance = floor(sqrt((x * x) + (y * y)));
    printf("%d", distance);
}