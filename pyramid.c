#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
   int height;

    // Prompt the user for the pyramid's height, ensuring it's a positive integer
    do
    {
        height = get_int("Height: ");
    }
    
    while(height < 1 || height > 8);

    // Print the pyramid of the given height
    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }
}

// Function to print a row with a given number of spaces and bricks
void print_row(int spaces, int bricks)
{
    // Print leading spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // Print left-aligned bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("  ");
    // Print right-aligned bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
