/*
--------------------------------------------------
Name    : Binary Search Tree
Author  : Danial Khorasanizadeh
Course  : Foundations of programming(Fall 99)
Date    : 10/Jan/2021
--------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    long long int data;
    struct node *right;
    struct node *left;
};
void addRight(long long int data, struct node *node);
void addLeft(long long int data, struct node *node);
void inOrderTraverse(struct node *node);
int main(void)
{
    long long int data;
    int n;
    scanf("%d", &n);
    struct node *head = NULL;
    for (n; n > 0; n--)
    {
        scanf("%lld", &data);
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = data;
            head->left = NULL;
            head->right = NULL;
        }
        else
        {
            if (data > head->data)
            {
                addRight(data, head);
            }
            else
            {
                addLeft(data, head);
            }
        }
    }
    inOrderTraverse(head);
    return 0;
}
void addRight(long long int data, struct node *node)
{
    if (node->right == NULL)
    {
        struct node *tempNode = (struct node *)malloc(sizeof(struct node));
        tempNode->data = data;
        tempNode->left = NULL;
        tempNode->right = NULL;
        node->right = tempNode;
        return;
    }
    else
    {
        if (data > node->right->data)
        {
            addRight(data, node->right);
        }
        else
        {
            addLeft(data, node->right);
        }
    }
}
void addLeft(long long int data, struct node *node)
{
    if (node->left == NULL)
    {
        struct node *tempNode = (struct node *)malloc(sizeof(struct node));
        tempNode->data = data;
        tempNode->left = NULL;
        tempNode->right = NULL;
        node->left = tempNode;
        return;
    }
    else
    {
        if (data > node->left->data)
        {
            addRight(data, node->left);
        }
        else
        {
            addLeft(data, node->left);
        }
    }
}
void inOrderTraverse(struct node *node)
{
    if (node == NULL)
    {
        return;
    }
    inOrderTraverse(node->left);
    printf("%lld ", node->data);
    inOrderTraverse(node->right);
}