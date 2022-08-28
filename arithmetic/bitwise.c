#include <stdio.h>

int main()
{
    /*
    Bitwise operators
    Operaters for bit level programming

    & AND
    | OR
    ^ XOR
    << left shift
    >> right shift
    */

    int number1 = 5; // in binary that is 00000101
    int number2 = 3; // in binary that is 00000011

    // AND will go left to right and if both are 1 in one column that column in n3 will be 1
    int and = number1 & number2; // 00000001 = 1

    // OR will go left to right and if any are one it will be 1
    int or = number1 | number2; // 00000111 = 7

    // XOR will go left to right and if only one is 1 it will be 1
    int xor = number1 ^ number2; // 00000110 = 6

    printf("AND: %i\nOR: %i\nXOR: %i\n", and, or, xor);

    // Shifting
    
    // << 1; just shifts the bits one bit to the left and adds a 0 to the end
    int x = 10; // 00001010 = 10
    int y = x << 1; // shifted left 1 = 00010100 (20)
    printf("\nLeft shift: %i\n", y);


    // >> 1; just shifts the bits one bit to the right (oposite of <<)
    x = 10; // 00001010 = 10
    y = x >> 1; // shifted right 1 = 00000101 (5) | If i were to shift again or do >> 2 in the begining the value of y would be 2
    printf("Right shift: %i\n", y);

    // Basically shifting right halfs the number and shifting left doubles the number (note: since int if half the number is .5 it truncates that shit)
    return 0;
}