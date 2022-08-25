#include <stdio.h>

int main(){
    // A pointer is a variable that stores the memory address of another variable as its value.

    int number = 69420;
    // a pointer for this would be &number, lets print it
    printf("Memory address: %p\n", &number); // This should print memory address number (in hex format)

    // pointer for number
    // for int pointer i do int*

    int* ptr = &number;
    printf("Memmory address: %p\n", ptr); // Reference: Output the memory address of number with the pointer
    printf("Value: %i\n", *ptr); // Dereference: Output the value of number with the pointer (remember to put *)
}