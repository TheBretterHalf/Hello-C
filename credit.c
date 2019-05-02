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
        //printf("%i\n", numdigits);
    }
    while(numdigits!=15 && numdigits!=13 && numdigits!=16 );
    // printf("outofloop\n");
    // return 0;
    //for (int i=0; i<=numdigits; i++)
    //{
        //printf("%i", i);

    //}
    long long int odddigits=number;
    long long int evendigits=number;
    int oddtotal=0;
    int eventotal=0;
    while(odddigits != 0)
    {
        int digit = odddigits % 10;
        odddigits = odddigits / 100;
        //printf("%d\n", digit);
        oddtotal=oddtotal+digit;
        //printf("%d\n", oddtotal);
        int edigit = evendigits % 100;
        evendigits = evendigits /100;
        printf("%d", edigit);
    }
    printf("%d\n", oddtotal);
}