#include <stdio.h>

int main()
{
    /* 
    Operators:
    + (addition)
    - (subtraction)
    / (division)
    * (multiplication)
    % (modulus)
    ++ increment
    -- decrement
    */ 

    // Addition
    int add = 5 + 6;
    printf("Add: %i\n", add);

    // Subtract
    int sub = 69 - 42;
    printf("Sub: %i\n", sub);

    // Dividing:
    float div = 10 / (float) 3;
    printf("Div: %f\n", div);

    // Multiply:
    int mul = 69 * 420;
    printf("Mul: %i\n", mul);

    // Modulus (prints the remainder)
    int mod = 420 % 69;
    printf("Mod: %i\n", mod);

    int x = 2;
    x++; // will increment x by 1
    printf("X: %i\n", x); // x should be 3
    
    x--; // will decrement x by 1
    printf("X: %i\n", x); // x should be 2 again


    /* 
    Augmented asignment operators thing
    takes a vraible and asigns it to the result of the variable
    eg: x = x + 1 can also be x+=1
    */

    float y = 10;
    printf("\nY is equal to %.2f\n", y);
    
    y += 16; // y will be 10 + 16
    printf("Y += 16: %.2f\n", y);

    y -= 3; // y will be 26 - 3
    printf("Y -= 3: %.2f\n", y);

    y /= 4; // y will be 23 / 4
    printf("Y /= 4: %.2f\n", y);

    y *= 69; // y = y*69
    printf("Y *= 69: %.2f\n", y);

    return 0;

}