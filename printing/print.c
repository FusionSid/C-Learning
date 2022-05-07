#include <stdio.h>

int main()
{
    /*
    Format codes in c:
    (there are more just these are some main ones)

    %c	a single character
    %s	a string
    %hi	short (signed)
    %hu	short (unsigned)
    %lf	long double
    %n	prints nothing
    %d	a decimal integer (assumes base 10)
    %i	a decimal integer (detects the base automatically)
    %li long integer
    %o	an octal (base 8) integer
    %x	a hexadecimal (base 16) integer
    %p	an address (or pointer)
    %f	a floating point number for floats
    %u	int unsigned decimal
    %e	a floating point number in scientific notation
    %E	a floating point number in scientific notation
    %%	the % symbol
    */

    // Print text (end="" so we need to add a \n)
    printf("Hello there\n");

    // printing a int
    printf("Age: %i\n", 15);

    // printing a string
    printf("Hello There: %s\n", "Siddhesh");

    return 0;
}
