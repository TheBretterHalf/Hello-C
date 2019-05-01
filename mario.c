#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, space, k = 0;
    int height = 0;
    do
    {
        height = get_int("Height : ");
    }
    while (height > 8 || height < 1);
    do
    {

        for (i = 2; i <= height + 1; i++, k = 0)
        {
            for (space = 0; space <= height - i; space++)
            {
                printf(" ");
            }
            while (k != i - 1)
            {
                printf("#");
                ++k;
            }
            printf("  ");
            for (j = 1; j <= k; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    while (height < 1 && height > 9);
    return 0;
}