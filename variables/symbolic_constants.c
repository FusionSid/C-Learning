#include <stdio.h>
/*
in c i can use the #define to define constants like this
A #define line defines a symbolic name or symbolic constant
*/

#define name "Siddhesh"
#define age 15

// Also if i wanted i can do: 
#define e printf("e\n")
// Check out e.c in scripts/tests dir

int main() {
    printf("Hey my name is %s and I am %i years old\n", name, age);
    e;
    return 0;
}
