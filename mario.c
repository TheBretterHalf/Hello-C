#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, space, height, k = 0;
    do
        {
            height = get_int("Height : ");
            if (height>0 && height<9)
            {
                height=height+1;
                for (i = 1; i <= height; i++, k = 0)
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
            } else{}
        }while (height>0 && height<9);
    return 0;
}

