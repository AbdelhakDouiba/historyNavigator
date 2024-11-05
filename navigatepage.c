#include "navigation.h"

/**
 * navigatePage - make the necessary operation when we navigate to new page
 * @backStack: The back stack of navigation, it need to be updated
 * @forwarardStack: The Forward Stack of navigation, it need to be updated
 * @pagename: name of the new page
 */

void navigatePage(Dstack *backStack, Dstack *forwardStack, char *pagename)
{
    destroy(forwardStack);
    push(backStack, pagename);
    printf("Welcome in -> %s\n", pagename);
}