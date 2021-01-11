/*
--------------------------------------------------
Name    : Vector
Author  : Danial Khorasanizadeh
Course  : Foundations of programming(Fall 99)
Date    : 11/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createNode(int data);
int main(void)
{
    return 0;
}
struct node *createNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    return node;
}