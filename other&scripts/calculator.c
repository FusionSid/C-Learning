#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char op;
    char *ptr;
    char *token;
    char input[42];
    double num1, num2;

    // Get input
    printf("Enter equation: ");
    fgets(input, 42, stdin);

    // Split string into n1, op & n2
    token = strtok(input, " ");
    num1 = strtod(token, &ptr);

    token = strtok(NULL, " ");
    op = *token;

    token = strtok(NULL, " ");
    num2 = strtod(token, &ptr);

    // Check the operator and print corresponding value
    switch (op)
    {
    case '+':
        printf("Answer: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Answer: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Answer: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("Answer: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("invalid operator bitch\n");
        break;
    }
    return 0;
}