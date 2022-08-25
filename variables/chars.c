#include <stdio.h>

int main()
{
    /* Chars: */

    /*
    To create a variable with a character we use the char keyword
    And also you use single quotes
    */
    char letter = 'A';

    // Use the format code %c to print it
    printf("%c\n", letter);

    /*
    In C there is no strings instead you use a character array
    This is a char array with 8 chars:
    */
    char name[] = "Siddhesh";

    /*
    To declare a char variable we do char <name>[length] also add 1 for the end of string char (\0)
    Example:
    */

    char lmao[5];

    /*
    The standard library provides functions for chars
    such as for char input and ouput we have this:
    */
    printf("Enter a char: ");
    char c = getchar();
    putchar(c); // Puts a single char on screen

    // Get char, asign it to the var ch and then print to screen
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);

    printf("E");

    return 0;
}