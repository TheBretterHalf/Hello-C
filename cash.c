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
    int changeq;
    int changed;
    int changen;
    do
    {
        cash = get_float("Cash: ");
        money=cash*100;
    } while (money<0);
    if(money>=25)
    {
        quarters=money/25;
        printf("quarters: %i\n", quarters);
        changeq=money%25;
        if (changeq>=10)
        {
            dimes=changeq/10;
            printf("dimes: %i\n", dimes);
            changed=changeq%10;
            if (changed>=5)
            {
                nickels=changed/5;
                printf("nickels: %i\n", nickels);
                changen=changed%5;
                if(changen>=1)
                {
                    pennies=changen;
                    printf("pennies: %i\n", pennies);
                }
            }
        }
    }
}