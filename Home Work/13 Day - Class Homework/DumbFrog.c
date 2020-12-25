/*
--------------------------------------------------
Name    : Dumb Frog
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall99)
Date    : 23/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int size_x, size_y, position_x = 0, position_y = 0, energy = 0, check = 1;
    scanf("%d*%d", &size_y, &size_x);
    getchar();
    char zamin[size_y][size_x], command[10];
    int energyChnage[size_y][size_x], jump_x[size_y][size_x], jump_y[size_y][size_x];
    for (int i = 0; i < size_y; i++)
    {
        for (int j = 0; j < size_x; j++)
        {
            scanf("%c", &zamin[i][j]);
            if (zamin[i][j] == 'E')
            {
                scanf("(%d) ", &energyChnage[i][j]);
            }
            else if (zamin[i][j] == 'J')
            {
                scanf("(%d,%d) ", &jump_y[i][j], &jump_x[i][j]);
            }
            else
            {
                getchar();
            }
        }
    }
    do
    {
        scanf("%s", command);
        if (strcmp(command, "Up") == 0)
        {
            if (position_y - 1 >= 0)
            {
                position_y -= 1;
            }
            else
            {
                printf("Impossible place!\n");
            }
        }
        else if (strcmp(command, "Down") == 0)
        {
            if (position_y + 1 < size_y)
            {
                position_y += 1;
            }
            else
            {
                printf("Impossible place!\n");
            }
        }
        else if (strcmp(command, "Right") == 0)
        {
            if (position_x + 1 < size_x)
            {
                position_x += 1;
            }
            else
            {
                printf("Impossible place!\n");
            }
        }
        else if (strcmp(command, "Left") == 0)
        {
            if (position_x - 1 >= 0)
            {
                position_x -= 1;
            }
            else
            {
                printf("Impossible place!\n");
            }
        }
        else if (strcmp(command, "Location") == 0)
        {
            printf("Location (%d,%d)\n", position_y, position_x);
            continue;
        }
        while (1)
        {
            if (zamin[position_y][position_x] == 'E')
            {
                energy += energyChnage[position_y][position_x];
                if (energy <= 0)
                {
                    printf("Frog died! Energy %d!\n", energy);
                    check = 0;
                    break;
                }
                else
                {
                    printf("Energy %d!\n", energy);
                    break;
                }
            }
            else if (zamin[position_y][position_x] == 'J')
            {
                if ((jump_x[position_y][position_x] < 0 || jump_x[position_y][position_x] >= size_x) || (jump_y[position_y][position_x] < 0 || jump_y[position_y][position_x] >= size_y))
                {
                    printf("Impossible place!\n");
                }
                else
                {
                    printf("Jump to (%d,%d)\n", jump_y[position_y][position_x], jump_x[position_y][position_x]);
                    int temp_x = position_x;
                    position_x = jump_x[position_y][position_x];
                    position_y = jump_y[position_y][temp_x];
                }
            }
            else if (zamin[position_y][position_x] == 'C')
            {
                printf("Frog hunted by crocodile :-/! Energy %d!\n", energy);
                check = 0;
                break;
            }
            else if (zamin[position_y][position_x] == 'N')
            {
                break;
            }
        }
        if (!check)
        {
            break;
        }
    } while (strcmp(command, "Finish") != 0);
    if (strcmp(command, "Finish") == 0)
    {
        printf("Energy %d!\n", energy);
    }
    return 0;
}