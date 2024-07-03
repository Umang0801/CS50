#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check if there is exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if every character in argv[1] is a digit
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] from a string to an int
    int k = atoi(argv[1]);

    // Prompt the user for plaintext
    string plaintext = get_string("plaintext:  ");

    // Encrypt the plaintext
    printf("ciphertext: ");
    
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    // Print a newline at the end
    printf("\n");

    return 0;
}
