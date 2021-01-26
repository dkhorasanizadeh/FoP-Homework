/*
--------------------------------------------------
Name    : Saf
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 26/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct queue
{
    struct node *front;
    struct node *rear;
};
struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void addToQueue(struct queue *q, int data)
{
    struct node *temp = newNode(data);
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}
void deleteFromQueue(struct queue *q)
{
    if (q->front == NULL)
    {
        return;
    }
    struct node *temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    free(temp);
}
void addToQueueFront(struct queue *q, int data)
{
    struct node *temp = newNode(data);
    if (q->front == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    struct node *temp2 = q->front;
    q->front = temp;
    q->front->next = temp2;
}
int main(void)
{
    int n, commandsCount, command;
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    scanf("%d %d", &n, &commandsCount);
    for (int i = 1; i <= n; i++)
    {
        addToQueue(q, i);
    }
    for (int i = 0; i < commandsCount; i++)
    {
        scanf("%d", &command);
        if (command == 0)
        {
            int data = q->front->data;
            printf("%d\n", data);
            addToQueue(q, data);
            deleteFromQueue(q);
        }
        else
        {
            struct node *temp = q->front;
            if (temp->data != command)
            {
                while (temp->next->data != command && temp->next != NULL)
                {
                    temp = temp->next;
                }
                if (temp->next != NULL)
                {
                    struct node *temp2 = temp->next;
                    temp->next = temp->next->next;
                    if (temp->next == NULL)
                    {
                        q->rear = temp;
                    }
                    free(temp2);
                    addToQueueFront(q, command);
                }
            }
        }
    }
    return 0;
}