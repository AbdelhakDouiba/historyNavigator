#include "navigation.h"

/**
 * addnode - add node to the list
 * @head: the head of the list
 * @str: data to be inserted
 */
 
void addnode(node **head, char *str)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL)
        exit(-1);
    newNode->pagename = strdup((const char *)str);
    if (newNode->pagename == NULL)
        exit(-1);
    newNode->next = *head;
    *head = newNode;
}