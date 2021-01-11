/*
--------------------------------------------------
Name    :
Author  : Danial Khorasanizadeh
Course  :
Date    : 01/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stackSize = 0;
;
struct StackNode
{
    int x;
    int y;
    int direction;
    char previousDirection;
    struct StackNode *next;
};

struct StackNode *newNode(int x, int y, int direction, char prevDirection)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    stackNode->x = x;
    stackNode->y = y;
    stackNode->direction = direction;
    stackNode->previousDirection = prevDirection;
    stackNode->next = NULL;
    return stackNode;
}

int hasElement(struct StackNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push(struct StackNode **root, int x, int y, int direction, char prevDirection)
{
    struct StackNode *stackNode = newNode(x, y, direction, prevDirection);
    stackNode->next = *root;
    *root = stackNode;
    stackSize++;
}

void pop(struct StackNode **root)
{
    if (hasElement(*root))
    {
        struct StackNode *temp = *root;
        *root = (*root)->next;
        free(temp);
        stackSize--;
    }
}
int isPrime(int number)
{
    if (number <= 3)
    {
        return number > 1;
    }
    else if (number % 2 == 0 || number % 3 == 0)
    {
        return 0;
    }
    int i = 5;
    while (i * i <= number)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            return 0;
        }
        i += 6;
    }
    return 1;
}
void findPath(int *matrix, int startX, int startY, int endX, int endY, int size)
{
    int *visited = (int *)calloc(size * size, sizeof(int));
    int currentX = startX, currentY = startY;
    struct StackNode *stack = NULL;
    struct StackNode temp;
    push(&stack, startX, startY, 0, 'X');
    while (stackSize != 0)
    {
        temp.x = stack->x;
        temp.y = stack->y;
        temp.direction = stack->direction;
        temp.previousDirection = stack->previousDirection;
        int direction = temp.direction;
        currentX = temp.x;
        currentY = temp.y;
        temp.direction++;
        pop(&stack);
        push(&stack, temp.x, temp.y, temp.direction, temp.previousDirection);
        if (currentX == endX && currentY == endY)
        {
            int i = stackSize;
            char *string = (char *)calloc(i, sizeof(char));
            string[i - 1] = '\0';
            for (int j = i - 2; j >= 0; j--)
            {
                string[j] = stack->previousDirection;
                pop(&stack);
            }
            printf("%s\n", string);
            while (stackSize != 0)
            {
                pop(&stack);
            }
            free(string);
            return;
        }
        if (direction == 0)
        {
            if (currentX - 1 >= 0 && isPrime(*(matrix + (currentX - 1) * size + currentY)) && !(*(visited + (currentX - 1) * size + currentY)))
            {
                push(&stack, currentX - 1, currentY, 0, 'U');
                *(visited + (currentX - 1) * size + currentY) = 1;
            }
        }
        else if (direction == 1)
        {
            if (currentY - 1 >= 0 && isPrime(*(matrix + currentX * size + currentY - 1)) && !(*(visited + currentX * size + currentY - 1)))
            {
                push(&stack, currentX, currentY - 1, 0, 'L');
                *(visited + currentX * size + currentY - 1) = 1;
            }
        }
        else if (direction == 2)
        {
            if (currentX + 1 < size && isPrime(*(matrix + (currentX + 1) * size + currentY)) && !(*(visited + (currentX + 1) * size + currentY)))
            {
                push(&stack, currentX + 1, currentY, 0, 'D');
                *(visited + (currentX + 1) * size + currentY) = 1;
            }
        }
        else if (direction == 3)
        {
            if (currentY + 1 < size && isPrime(*(matrix + currentX * size + currentY + 1)) && !(*(visited + currentX * size + currentY + 1)))
            {
                push(&stack, currentX, currentY + 1, 0, 'R');
                *(visited + currentX * size + currentY + 1) = 1;
            }
        }
        else
        {
            *(visited + (temp.x) * size + temp.y) = 0;
            pop(&stack);
        }
    }
    printf("No Monaseb Masir!\n");
    return;
}
int main(void)
{
    int numberOfTests;
    scanf("%d", &numberOfTests);
    int *matrix = NULL;
    for (int i = 0; i < numberOfTests; i++)
    {
        int size;
        scanf("%d", &size);
        matrix = (int *)realloc(matrix, size * size * sizeof(int));
        int temp;
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                scanf("%d", matrix + j * size + k);
            }
        }
        int startX, startY, endX, endY;
        scanf("%d%d %d%d", &startX, &startY, &endX, &endY);
        findPath(matrix, startX, startY, endX, endY, size);
    }
    free(matrix);
    return 0;
}