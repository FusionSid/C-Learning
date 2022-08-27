#include <stdio.h>
#include <stdbool.h> // for booleans

int main()
{
    /* Integers: */

    // Defining a variable
    int a;
    int b;

    // Initializing the variable
    a = 10;
    b = 20;

    // Doing it in one line
    int c = a + b;

    // Printing out an integer
    printf("A: %i\nB: %i\nC: %i\n", a, b, c);

    /*
    The max length for an int is 2147483647 so if you wanted
    to store a larget number you would use long
    */
    long d = 3000000000;

    // And to print it you use %li for long int
    printf("D: %li\n", d);

    return 0;
}