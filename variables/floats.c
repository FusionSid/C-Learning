#include <stdio.h>
#include <stdbool.h> // for booleans

int main()
{   
    /* Floats: */

    // Using the float keyword to make a float
    float age = 15.328852;

    /*
    To print the float we use the %f format code
    */
    printf("Age: %f\n", age);

    /*
    If we want to shorten it to a certain amount
    of decimal places we do %.<places>f eg:
    */
    printf("Age: %.2f\n", age);

    /*
    Note: Max length of float is 3.4 × 10^38
    if you want a number bigger/precise than that you use double
    */
   
    return 0;
}