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
        printf("Usage: ./decrypt key\n");
        return 1;
    }

    // Check if every character in argv[1] is a digit
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./decrypt key\n");
            return 1;
        }
    }

    // Convert argv[1] from a string to an int
    int k = atoi(argv[1]);

    // Prompt the user for ciphertext
    string ciphertext = get_string("ciphertext: ");

    // Decrypt the ciphertext
    printf("plaintext:  ");
    for (int i = 0, len = strlen(ciphertext); i < len; i++)
    {
        if (isupper(ciphertext[i]))
        {
            printf("%c", (ciphertext[i] - 'A' - k + 26) % 26 + 'A');
        }
        else if (islower(ciphertext[i]))
        {
            printf("%c", (ciphertext[i] - 'a' - k + 26) % 26 + 'a');
        }
        else
        {
            printf("%c", ciphertext[i]);
        }
    }

    printf("\n");

    return 0;
}
