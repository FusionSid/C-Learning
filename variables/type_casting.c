#include <stdio.h>

// Type casting C

int main() {
    // Here im making 2 int variables 13, and 2
    int number = 13;
    int divide_by = 2;

    // Now lets print 13 / 2 which should be 6.5 right?
    printf("13 / 2 = %d\n", number / divide_by); // but when we run this code it prints 6
    // This is because in c dividing an integer by an integer gives an integer. So since the answer is 6.5 the .5 is truncated so we get the integer 6

    // Lets type case the number to a float so we can divide it
    // To use the type case operater i do: (<datatype>) <var>
    printf("13 / 2 = %.1f\n", (double) number / divide_by);

    return 0;
}