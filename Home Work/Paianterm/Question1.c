/*
--------------------------------------------------
Name    : Social Nyetwork
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 26/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct user
{
    char username[200];
    char gender[7];
    int age;
    char id[20];
};

int sort(const void *p1, const void *p2)
{
    const struct user *user1 = p1;
    const struct user *user2 = p2;
    return strcmp(user1->id, user2->id);
}
int main(void)
{
    int commandCount;
    scanf("%d", &commandCount);
    char command[20];
    struct user *users = NULL;
    int userCount = 0;
    int findCommandCount = 1;
    for (int i = 0; i < commandCount; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "Add"))
        {
            users = (struct user *)realloc(users, (userCount + 1) * sizeof(struct user));
            scanf("%s", command);
            strcpy(users[userCount].username, command);
            scanf("%s", command);
            strcpy(users[userCount].gender, command);
            scanf("%s", command);
            users[userCount].age = atoi(command);
            scanf("%s", command);
            strcpy(users[userCount].id, command);
            printf("User %s added successfully\n", users[userCount].id);
            userCount++;
        }
        else if (!strcmp(command, "Find"))
        {
            scanf("%s", command);
            int len = strlen(command);
            qsort(users, userCount, sizeof(struct user), sort);
            int findCount = 0;
            for (int i = 0; i < userCount && findCount < 10; i++)
            {
                if (!strncmp(command, users[i].id, len))
                {
                    printf("%d %s %s %d %s\n", findCommandCount, users[i].username, users[i].gender, users[i].age, users[i].id);
                    findCount++;
                }
            }
            if (findCount == 0)
            {
                printf("%d No user found\n", findCommandCount);
            }
            findCommandCount++;
        }
    }
    return 0;
}