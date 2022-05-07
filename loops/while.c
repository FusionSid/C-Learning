#include <stdio.h>

int main()
{
    /*
    While loop
    The while loop looks at the expression in the brackets
    and as long as that is true, the while loop will run

    Syntax:
    while (testExpression) 
    {
        code here
    }
    */

    int i = 1;

    while (i <= 5) // while i is less than or equal to 5
    { // this code will run:
        printf("%i\n", i);
        i++;
    }

    return 0;
}