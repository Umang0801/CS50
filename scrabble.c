#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word, int points[]);

int main(void)
{
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    int score1 = compute_score(player1, points);
    int score2 = compute_score(player2, points);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    return 0;
}

int compute_score(string word, int points[])
{
    int score = 0;
    
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            char letter = toupper(word[i]);
            score += points[letter - 'A'];
        }
    }
    return score;
}
