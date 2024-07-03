#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

// Function to convert text to binary
void textToBinary(const char *text)
{
    // Convert each character to binary and print it
    for (int i = 0; text[i] != '\0'; ++i)
    {
        for (int j = 7; j >= 0; --j)
        {
            printf("%d", (text[i] >> j) & 1);
        }
        printf(" "); // Add a space between binary codes of characters for readability
    }
    printf("\n");
}

// Function to convert binary to text
void binaryToText(const char *binary)
{
    // Convert each byte of binary to text and print it
    for (int i = 0; binary[i] != '\0'; i += 9) // Skip the space between binary codes
    {
        char byte[9]; // 8 bits plus null terminator
        strncpy(byte, &binary[i], 8);
        byte[8] = '\0';
        printf("%c", (char)strtol(byte, NULL, 2));
    }
    printf("\n");
}

// Function to validate user input
int validateInput(int choice)
{
    if (choice != 1 && choice != 2)
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 0; // Return false for invalid input
    }
    return 1; // Return true for valid input
}

int main()
{
    int choice;
    char *input;

    while (1) {
        printf("1. Text to Binary\n");
        printf("2. Binary to Text\n");
        printf("Enter your choice: ");
        choice = get_int("");
        if (validateInput(choice))
        {
            break; // Valid input, exit the loop
        }
    }

    switch (choice)
    {
        case 1:
            printf("Enter text to convert to binary: ");
            input = get_string("");
            if (input != NULL)
            {
                printf("Binary: ");
                textToBinary(input);
            }
            break;
        case 2:
            printf("Enter binary to convert to text: ");
            input = get_string("");
            if (input != NULL)
            {
                printf("Text: ");
                binaryToText(input);
            }
            break;
    }
    printf("\n");
}

