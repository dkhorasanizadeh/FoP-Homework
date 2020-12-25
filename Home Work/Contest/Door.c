#include <stdio.h>
#include <string.h>
int ways[3] = {1, 2, 3};
int ways_counter = 0;
int length;
void move_to_temple(int moved_steps, char *traps)
{
    if (traps[moved_steps] == 'K')
    {
        ways_counter++;
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        if (length - moved_steps >= ways[i] && traps[moved_steps + ways[i]] != 'T')
        {
            move_to_temple(moved_steps + ways[i], traps);
        }
    }
}
int main()
{
    scanf("%i", &length);
    char traps[length], check = 1;
    scanf("%s", traps);
    if (strstr(traps, "TTT") != NULL)
    {
        printf("%i", ways_counter);
    }
    else
    {
        move_to_temple(0, traps);
        printf("%i", ways_counter);
    }
}