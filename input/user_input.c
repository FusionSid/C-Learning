#include <stdio.h>

int main()
{
    // To get input in C we use the scanf function
    char name[15];

    printf("Enter your name and then a phrase: ");
    scanf("%s", name); // %s for string
    // Also not that i dont put & for string input
    printf("Hello %s!\n", name);
    /* 
    The scanf function will not include spaces so only one word 
    If you want more you can use the fgets function
    */
    char phrase[42];
    // This is gonna catch everything after you enter you name
    fgets(phrase, 42, stdin); // variable, length, stdin for standard(std) input(in)
    printf("Your phrase was:%s", phrase);

    return 0;
}
