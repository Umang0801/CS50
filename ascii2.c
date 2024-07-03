#include <cs50.h>
#include <stdio.h>
#include <string.h>  // Header for strtok
#include <stdlib.h>  // Header for atoi

int main(void)
{
    // Get the ASCII codes from the user
    string ascii_codes_str = get_string("Enter ASCII codes separated by space: ");

    // Initialize variables
    int ascii_code;
    char character;

    // Use strtok to parse the string of ASCII codes
    char *token = strtok(ascii_codes_str, " ");

    while (token != NULL)
    {
        // Convert each token to an integer
        ascii_code = atoi(token);

        // Convert the ASCII code to a character
        character = (char) ascii_code;

        // Print the character
        printf("%c", character);

        // Move to the next token
        token = strtok(NULL, " ");
    }

    // Print a new line at the end
    printf("\n");
}
