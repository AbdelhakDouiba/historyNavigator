#include "navigation.h"

/**
 * push - push an element into the stack
 * @stack: the target stack
 * @pagename: data to be inserted
 */

void push(Dstack *stack, char *pagename)
{
    addnode(&(stack->top), pagename);
}