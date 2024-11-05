#ifndef NAVIGATION_H
#define NAVIGATION_H

/**
 * node - an element that holds the name of the
 *        visited pages
 */
typedef struct node{
    char *pagename;
    struct node *next;
}node;

/**
 * dstack - A dynamic stack
 */
typedef struct stack{
    node *top;
}Dstack;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addnode(node **head, char *str);
void initDstack(Dstack *stack);
int isEmpty(Dstack *stack);
void destroy(Dstack *stack);
void push(Dstack *stack, char *pagename);
void pop(Dstack *stack);
void navigate();
void backPage(Dstack *backStack, Dstack *forwardStack);
void forwardPage(Dstack *backStack, Dstack *forwardStack);
void navigatePage(Dstack *backStack, Dstack *forwardStack, char *pagename);
void end(Dstack *backStack, Dstack *forwardStack, char *input);

#endif