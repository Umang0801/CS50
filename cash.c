#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = 0;

    // Promts the users for change owed in cents
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate total number of coins
    int total_quarters = calculate_quarters(cents);
    cents -= total_quarters * 25;

    int total_dimes = calculate_dimes(cents);
    cents -= total_dimes * 10;

    int total_nickels = calculate_nickels(cents);
    cents -= total_nickels * 5;

    int total_pennies = calculate_pennies(cents);

    int total_coins = total_quarters + total_dimes + total_nickels + total_pennies;

    printf("%d\n", total_coins);
}

// Calculate how many quarters you should give customer
int calculate_quarters(int cents)
{
    int quarters = 0;

    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

// Calculate how many dimes you should give customer
int calculate_dimes(int cents)
{
    int dimes = 0;

    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

// Calculate how many nickles you should give customer
int calculate_nickels(int cents)
{
    int nickels = 0;

    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

// Calculate how many pennies you should give customer
int calculate_pennies(int cents)
{
    int pennies = 0;

    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}
