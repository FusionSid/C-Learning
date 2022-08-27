#include <stdio.h>

int main()
{
    // If statments

    int number = 5;

    if (number < 5)
    {
        // if statment ^
        printf("Number is less than 5");
    }
    else if (number > 5 && number < 10)
    {
        // Else if statement ^
        printf("Number is more than 5 but less than 10");
    }
    else
    {
        // else statement ^
        printf("Number is something else");
    }

    // Another thing i can do is ternery statement/operater thing like condition ? value_if_true : value_if_false

    /*
    not = !
    and = &&
    or = ||
    */

    return 0;
}