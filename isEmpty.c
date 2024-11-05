#include "navigation.h"

/**
 * isEmpty - checks if the stack is empty
 * @stack: the stack to be checked
 */
 
int isEmpty(Dstack *stack)
{
    if (stack->top == NULL)
        return (1);
    return (0);
}