#include <cs50.h>
#include <stdio.h>

int main (void)

{
    int coins=0;
    float cash;
    int money;
    int i;
    int quarters;
    int nickels;
    int dimes;
    int pennies;
    do
    {
        cash = get_float("Change Owed: ");
        money=cash*100;
    } while (money<0);
    if(money>=25)
    {
        quarters=money/25;
        //printf("quarters: %i\n", quarters);
        money=money-(25*quarters);
    }
    if (money>=10)
    {
        dimes=money/10;
        //printf("dimes: %i\n", dimes);
        money=money-(10*dimes);
    }
    if (money>=5)
    {
        nickels=money/5;
        //printf("nickels: %i\n", nickels);
        money=money-(5*nickels);
    }
    else
    {
        pennies=money;
        //printf("pennies: %i\n", pennies);

    }
    total = quarters+dimes+nickels+pennies;
    printf("%i\n", total);
    return 0;
}