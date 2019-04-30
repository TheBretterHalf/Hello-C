#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int i, j, space, k=0;
    int height = get_int("Height :\n");
    for (i=1; i<=height; i++, k=0)
    {
        for (space=1; space<=height-i; space++)
        {
            printf(" ");
        }
        while (k!=i-1)
        {
            printf("#");
            ++k;
        }
        printf(" ");
        for (j=1; j<=height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

