#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, space, height, k = 0;
    do
    {
        height = get_int("Height : ");
        if (height > 0 && height < 9)
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
                printf(" ");
                for (j = 1; j <= k; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else
        {
            height = get_int("Height : ");
        }
    }
    while (height > 0 && height < 9);
    return 0;
}

