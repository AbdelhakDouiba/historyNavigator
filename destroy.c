#include "navigation.h"

/**
 * Destroy - Destroy a stack
 * @stack: the stack to be destroyed
 */
 
void destroy(Dstack *stack)
{
    while (!isEmpty(stack))
        pop(stack);
}