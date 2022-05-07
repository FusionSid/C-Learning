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
    printf("%c", letter);

    /* 
    In C there is no strings instead you use a character array
    This is a char array with 8 chars:
    */
    char name[] = "Siddhesh";

    /* 
    To declare a char variable we do char <name>[length]
    Example:
    */

    char lmao[5];

    return 0;
}