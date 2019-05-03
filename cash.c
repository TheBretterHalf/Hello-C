#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    int coins = 0;
    float cash;
    float money;
    int i;
    int quarters = 0;
    int nickels = 0, dimes = 0;
    int pennies = 0;
    int total;
    do
    {
        cash = get_float("Change Owed: ");
        //printf("%f\n", cash);
        money = round(cash * 100);
        //printf("%f\n", money);
    }
    while (money < 0);
    if (money >= 25)
    {
        //printf("%f\n", money);
        quarters = money / 25;
        //printf("quarters: %i\n", quarters);
        //printf("%i\n %i\n", 25*quarters, money);
        money = money - (25 * quarters);
        //printf("%i\n", money);
    }
    if (money >= 10)
    {
        dimes = money / 10;
        //printf("dimes: %i\n", dimes);
        money = money - (10 * dimes);
        //printf("%i\n", money);
    }
    if (money >= 5)
    {
        nickels = money / 5;
        //printf("nickels: %i\n", nickels);
        money = money - (5 * nickels);
        //printf("%i\n", money);
    }
    if (money >= 0)
    {
        pennies = money;
        //printf("pennies: %i\n", pennies);
        //printf("%i\n", money);

    }
    total = quarters + dimes + nickels + pennies;
    printf("%i\n", total);
    return 0;
}