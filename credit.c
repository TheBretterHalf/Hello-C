#include <cs50.h>
#include <math.h>
#include <stdio.h>

long-long number;

int main(void)
{
    do
    {
        number = get_long_long("Number: ");
    }
    while(number<1000000000000 || number>10000000000000000);

}