#include <stdio.h>

int main()
{
    double x, y;

    printf("Enter length of side 1 (cm): ");
    scanf("%lf", &x);

    printf("Enter length of side 2 (cm): ");
    scanf("%lf", &y);

    double area = x * y;
    double perimeter = (2 * x) + (2 * y);

    printf("The area of this rectangle is: %.2f\nThe perimeter of the rectangle is: %.2f\n", area, perimeter);
    return 0;
}