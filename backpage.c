#include "navigation.h"

/**
 * backPage - make the necessary operation when we navigate back
 * @backStack: The back stack of navigation, it need to be updated
 * @forwarardStack: The Forward Stack of navigation, it need to be updated
 */

void backPage(Dstack *backStack, Dstack *forwardStack)
{
    if (!isEmpty(backStack) && backStack->top->next != NULL)
    {
        if (backStack->top->next == NULL)
            printf("There is no Previous page !\n");
        else
        {
            printf("Welcome in -> %s\n", backStack->top->next->pagename);
            push(forwardStack, backStack->top->pagename);
            pop(backStack);
        }
    }
    else
    {
        printf("There is no Previous page !\n");
    }
}