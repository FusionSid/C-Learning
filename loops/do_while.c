#include <stdio.h>

int main()
{
    /* Do while loop thing
    The do..while loop is similar to the while loop with one important difference. 
    The body of do...while loop is executed at least once. 
    Only then, the test expression is evaluated.

    Syntax:
    do 
    {
        code
    }
    while (testExpression);
    */
    double number, sum = 0;

    // the body of the loop is executed at least once
    do {
        printf("Enter a number: ");
        scanf("%lf", &number); // long float
        sum += number;
    } 
    while(number != 0.0); // add numbers until the user enters zero

    printf("Sum = %.2lf\n",sum);

    return 0;

}