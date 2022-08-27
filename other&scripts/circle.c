#include <stdio.h>
#include <math.h>

int main()
{
    double r;

    printf("Enter length of radius (cm): ");
    scanf("%lf", &r);

    double area = M_PI * (r * r);
    double circumference = M_PI * (2 * r);

    printf("The area is: %.2f\nThe circumference is: %.2f\n", area, circumference);
    return 0;
}