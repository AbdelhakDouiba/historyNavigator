#include "navigation.h"

/**
 * forwardPage - make the necessary operation when we navigate forward
 * @backStack: The back stack of navigation, it need to be updated
 * @forwarardStack: The Forward Stack of navigation, it need to be updated
 */

void forwardPage(Dstack *backStack, Dstack *forwardStack)
{
    if (!isEmpty(forwardStack))
    {
        printf("Welcome in -> %s\n", forwardStack->top->pagename);
        push(backStack, forwardStack->top->pagename);
        pop(forwardStack);
    }
    else
        printf("There is no Next page !\n");
}