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
    while(odddigits > 0)
    {
        int digit = odddigits % 10;
        odddigits = odddigits / 100;
        //printf("%d\n", digit);
        oddtotal=oddtotal+digit;
        //printf("%d\n", oddtotal);
        int edigit = (evendigits/10) % 10;
        evendigits = evendigits /100;
        //printf("%d\n", edigit);
        edigit=2*edigit;
        if(edigit>9)
        {
            edigit=edigit/10+edigit%10;
            //printf("%d\n", edigit);
        }
        //printf("%d\n", edigit);
        eventotal= eventotal+edigit;
        //printf("%d\n", eventotal);
    }
    printf("%d\n", oddtotal);
    printf("%d\n", eventotal);
    int sumcheck = (eventotal+oddtotal)%10;
    printf("%d\n", sumcheck);
    if (sumcheck==0)
    {
        if (numdigits==15)
        {
            long long int amexfirsttwo=number/pow(10, numdigits-2);
            //printf("%lli\n", amexfirsttwo);
            if(amexfirsttwo==34 || amexfirsttwo==37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        if (numdigits==16)
        {

        }
    }
    else
    {
        printf("INVALID\n");
    }

}
//example values
//378282246310005