#include <cs50.h>
#include <math.h>
#include <stdio.h>

long long int number;
int numdigits;

int main(void)
{
    do
    {
        number = get_long_long("Number: ");
        if (number>0)
        {
            numdigits = floor(log10(number)) + 1;
        }
        printf("%i\n", numdigits);
    }
    while(numdigits!=16 || numdigits!=13 || numdigits!=15);

}