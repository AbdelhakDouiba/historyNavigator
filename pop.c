#include "navigation.h"

/**
 *pop - remove an element from the stack
 *@stack: the target stack
 */

void pop(Dstack *stack)
{
    if (!isEmpty(stack))
    {
        node *tmp = stack->top;
        stack->top = stack->top->next;
        free(tmp->pagename);
        free(tmp);
    }
}