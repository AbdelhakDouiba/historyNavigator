#include "navigation.h"

/**
 * end - end navigation
 * @backStack: a stack that will be destroyed 
 * @forwardStack: a stack that will be destroyed 
 * @input: an input to be freed
 */
 
void end(Dstack *backStack, Dstack *forwardStack, char *input)
{
    printf("GoodBye!\n");
    free(input);
    destroy(backStack);
    destroy(forwardStack);
    free(backStack);
    free(forwardStack);
}