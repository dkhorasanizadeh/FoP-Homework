/*
--------------------------------------------------
Name    : Bagher khasteh ast ama bifarhang na!
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 06/Dec/2020
Link    : https://quera.ir/problemset/contest/10232
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int numberOfStops, distanceToUniversity, time = 0, traveled = 0, distanceToNextStop, redlight, greenlight;
    scanf("%d%d", &numberOfStops, &distanceToUniversity);
    for (int i = 0; i < numberOfStops; i++)
    {
        scanf("%d%d%d", &distanceToNextStop, &redlight, &greenlight);
        time += (distanceToNextStop - traveled);
        traveled = distanceToNextStop;
        if (time % (redlight + greenlight) < redlight)
        {
            time += (redlight - time % (redlight + greenlight));
        }
    }
    if (traveled < distanceToUniversity)
    {
        time += (distanceToUniversity - traveled);
    }
    printf("%d", time);
    return 0;
}