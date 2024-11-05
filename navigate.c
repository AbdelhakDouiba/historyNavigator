#include "navigation.h"

/**
 * navigate - start the navigation
 */

void navigate()
{
    Dstack *backStack = NULL, *forwardStack = NULL;
    char *input = NULL, *current;
    ssize_t len = 0;

    backStack = (Dstack *)malloc(sizeof(Dstack));
    if (backStack == NULL)
        exit(-1);
    forwardStack = (Dstack *)malloc(sizeof(Dstack));
    if (forwardStack == NULL)
        exit(-1);
    //initialize stacks
    initDstack(backStack);
    initDstack(forwardStack);

    printf("Welcome to the navigator !!!\n");
    printf("! enter END if you want to exit\n");
    printf("enter N to see the next page(if existed) and P for Previous page (if existed)\n");
    do
    {
        printf("Navigate to : ");
        // set up variables
        input = NULL;
        len = 0;

        // reading from the use
        getline(&input, &len, stdin);

        // Navigation
        if (strcmp("N\n", input) == 0)
        {
            // navigate to next page
            forwardPage(backStack, forwardStack);
            
        }
        else if (strcmp("P\n", input) == 0)
        {
            // navigate to previous
            backPage(backStack, forwardStack);
        }
        else if (strcmp("END\n", input) == 0)
        {
            // End session
            end(backStack, forwardStack, input);
            break;
        }
        else
        {
            // navigate to the new page
            navigatePage(backStack, forwardStack, input);
        }
        free(input);
    }while (1);
}