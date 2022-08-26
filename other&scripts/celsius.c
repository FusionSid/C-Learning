#include <stdio.h>

/*
This program will print out Celsius and Fahrenheit
*/

int main() {
    for (int i = 0; i < 50; i++) {
        printf("Celsius: %i\tFahrenheit: %.2f\n", i, (i*1.8+32));
    }

    int input;
    printf("\nEnter celsius: ");
    scanf("%i", &input);
    printf("%i°C Converted to Fahrenheit = %.2f°F\n", input, (input*1.8+32));

    return 0;
}