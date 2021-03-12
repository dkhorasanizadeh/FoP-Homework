/*
--------------------------------------------------
Name    : Linked List
Author  : Danial Khorasanizadeh
Course  : Foundations of programming(Fall 99)
Date    : 06/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int listSize = 0;
void add(int input);
void delete (int where);
struct node *search(int check);
void insertIn(int where, int input);
void print(void);
int main(void)
{
    return 0;
}
void add(int input)
{
    struct node *tempPointer = head;
    if (head != NULL)
    {
        while (tempPointer->next != NULL)
        {
            tempPointer = tempPointer->next;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = input;
        newNode->next = NULL;
        tempPointer->next = newNode;
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        head = newNode;
        newNode->data = input;
        newNode->next = NULL;
    }
    listSize++;
}
void delete (int where)
{
    where = listSize <= where ? listSize : where;
    if (head == NULL)
    {
        return;
    }
    struct node *firstTempPointer = head, *secondTempPointer;
    int counter = 0;
    while (firstTempPointer->next != NULL && counter + 1 < where)
    {
        firstTempPointer = firstTempPointer->next;
        counter++;
    }
    if (where != 0)
    {
        struct node *secondTempPointer;
        secondTempPointer = firstTempPointer->next;
        if (secondTempPointer != NULL)
        {
            free(secondTempPointer);
            firstTempPointer->next = firstTempPointer->next->next;
        }
        else
        {
            firstTempPointer->next = NULL;
        }
    }
    else
    {
        head = firstTempPointer->next;
        free(firstTempPointer);
    }
    listSize--;
}
struct node *search(int check)
{
    struct node *tempPointer = head;
    while (tempPointer->data != check && tempPointer->next != NULL)
    {
        tempPointer = tempPointer->next;
    }
    return tempPointer;
}
void insertIn(int where, int input)
{
    struct node *tempPointer = head;
    int counter = 0;
    while (tempPointer->next != NULL && counter + 1 < where)
    {
        tempPointer = tempPointer->next;
        counter++;
    }
    if (tempPointer != NULL && where != 0)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = tempPointer->next;
        tempPointer->next = newNode;
        newNode->data = input;
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        head = newNode;
        newNode->data = input;
        newNode->next = tempPointer;
    }
    listSize++;
}
void print(void)
{
    struct node *tempPointer = head;
    while (tempPointer != NULL)
    {
        printf("%d\n", tempPointer->data);
        tempPointer = tempPointer->next;
    }
}