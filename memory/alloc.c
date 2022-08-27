#include <stdio.h>
#include <string.h>

// Import for alloc functions:
#include <stdlib.h>

/* Memory allocation with malloc, realloc, calloc and free functions*/

int main()
{
    // The malloc function will return a pointer to the address in memory i allocated
    // Allocate 10 bytes for my username:
    size_t space_needed = 10 * sizeof(char);
    char *name = malloc(space_needed);

    // Copy "FusionSid" into the allocated memory
    strcpy(name, "FusionSid");
    printf("malloc: %s\n", name);

    // Use calloc to make space for 3 integers
    int *numbers = calloc(3, sizeof(int));
    numbers[0] = 69;
    numbers[1] = 420;
    numbers[2] = 69420;

    printf("calloc: %i, %i, %i\n", numbers[0], numbers[1], numbers[2]);

    // Realloc, this will reallocate another 8 bytes to name
    name = realloc(name, 8 * sizeof(char));
    strcat(name, "is dumb"); // " add is dumb" to the end of "FusionSid"
    printf("realloc: %s\n", name);

    // Free everything back for the system to use

    free(name);
    free(numbers);

    // To prove it worked this should print nothing since name has been made free
    printf("\nname: %s\n", name);

    return 0;
}