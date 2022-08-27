// file to run my code cause im lazy
// Usage: runc <filename>

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Declare function
bool checkIfFileExists(const char *filename);

int main(int argc, char *argv[])
{
    // Check if file name was provided in argv
    if (argv[1] == NULL)
    {
        printf("you must provide filename\n");
        return 1;
    }

    // Format argv[1] with gcc command to make command var
    char command[42];
    sprintf(command, "gcc %s -o a.out", argv[1]);

    // Compile code
    system(command);

    // Check if a.out exists, if it exists it means my code worked
    // If it doesnt exist SKILL ISSUE ngl
    if (!(checkIfFileExists("a.out")))
    {
        return 1;
    }

    // Run compiled program
    system("./a.out");

    // Delete compiled version
    system("rm a.out");

    return 0;
}

bool checkIfFileExists(const char *filename)
{
    // try opening file, if fail to open that means it doesnt exist
    FILE *file;
    file = fopen(filename, "r");
    if (file)
    {
        fclose(file);
        return true;
    }

    return false;
}