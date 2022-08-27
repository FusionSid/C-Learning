#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;

    printf("Enter length of side 1 (cm): ");
    scanf("%lf", &a);

    printf("Enter length of side 2 (cm): ");
    scanf("%lf", &b);

    double c = sqrt((a * a) + (b * b));

    printf("The last side is: %lfcm big\n", c);

    return 0;
}