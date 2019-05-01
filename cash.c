#include <cs50.h>
#include <stdio.h>

int main (void)

{
    int coins=0;
    float cash;
    int money;
    do
    {
        cash = get_float("Cash: ");
        money=cash*100;
        printf("%i\n", money);
    } while (money<0);
    if (money>=25){
        money=money-25;
        coins++;
        printf("%i\n", coins);
    }else{}
}