#include <stdio.h>

// Command line arguments

int main(int argc, char *argv[])
{
    // when i do ./a.out it counts as one
    // but if i include something after like ./a.out hello world, argc will be 3
    printf("You entered: %i cli args\n", argc);

    // I can get the values of the arguments in argv
    // Loop thru args:
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}