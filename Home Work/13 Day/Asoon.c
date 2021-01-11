/*
--------------------------------------------------
Name    : Asoon
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 30/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stackSize = 0;
struct StackNode
{
    int data;
    struct StackNode *next;
};

struct StackNode *newNode(int data)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    stackNode->data = data;
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

void push(struct StackNode **root, int data)
{
    struct StackNode *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    stackSize++;
}

void pop(struct StackNode **root)
{
    struct StackNode *temp = *root;
    *root = (*root)->next;
    free(temp);
    stackSize--;
}

int top(struct StackNode *root)
{
    return root->data;
}
int count(void)
{
    struct StackNode *stack = NULL;
    char a;
    do
    {
        scanf("%c", &a);
        if (a == ')' && hasElement(stack))
        {
            if (top(stack) == '(')
            {
                pop(&stack);
            }
            else
            {
                push(&stack, a);
            }
        }
        else if (a == '(' || a == ')')
        {
            push(&stack, a);
        }
    } while (a != '\n');
    int nonCompatibles = stackSize;
    int openings = 0;
    while (hasElement(stack) && top(stack) == '(')
    {
        pop(&stack);
        openings++;
    }
    return (nonCompatibles / 2 + openings % 2);
}
int main(void)
{
    printf("%d", count());
    return 0;
}
