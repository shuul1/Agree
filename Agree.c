#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = get_char("Do u agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }

    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed.\n");
    }
}
