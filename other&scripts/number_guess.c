// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(int lower, int upper)
{
    // Set seed for random number using clock
    return (rand() % (upper - lower + 1)) + lower;
}

int main()
{
    srand(time(0));

    // Generate number between 1 and 100
    int number = generateNumber(1, 100);

    // Declare guess number
    int guess;

    int guess_count = 0;

    do
    {
        printf("Enter a number from 1 - 100: ");
        scanf("%i", &guess);

        if (guess > 100)
        {
            printf("Number is more than 100\nRemember when i said 1 - 100\nWELL CLEARLY YOUR DUMBASS BITCH SELF CANT READ!!!\n");
        }
        else if (guess < number)
        {
            printf("Guess is to low\n");
        }
        else if (guess > number)
        {
            printf("Guess is to high\n");
        }

        guess_count++;

        if (guess_count >= 10)
        {
            printf("\nYou ran out of guesess, Skill issue\n");
            return 0;
        }

    } while (number != guess);

    printf("\nYay you guessed it!!!\n");

    return 0;
}
