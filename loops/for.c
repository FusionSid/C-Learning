#include <stdio.h>

int main()
{
    /*
    For loop Syntax:

    for (initializationStatement; testExpression; updateStatement)
    {
        // code here lmao
    }

    */

    /* 
    Example to print from 0 - 100
    i is created and set to 0, loop will run while i is less than 101, every iteration i will be incremented by 1
    */

    for (int i = 0; i < 101; i++) 
    {
        printf("%i\n", i);
    }
    
    return 0;
}