#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Initialize the string
    string s = get_string ("Get ASCII code of: ");

    // Calculate the length of the string
    int length = strlen(s);

    // Print ASCII values of each character in the string
    for (int i = 0; i < length; i++)
    {
        printf("%i ", s[i]);
    }

    // Print a new line at the end
    printf("\n");
}
