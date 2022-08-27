#include <stdio.h>

int main()
{
    // Switch statments
    // create using switch, case and default keywords

    // char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    char operation = getchar();

    printf("Enter number 1: ");
    scanf("%lf", &n1);

    printf("Enter number 2: ");
    scanf("%lf", &n2);

    switch (operation)
    {
    // These are all like if/else if statments
    // Make sure to put break; after each case statment
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
        break;

    // operator doesn't match any case constant +, -, *, /
    // This default will run if it doesnt match any other cases kinda like an else statment
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}