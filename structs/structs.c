#include <stdio.h>

// C structs

struct Person
{ // declare with struct keywords
    // define members of the struct
    int age;
    char firstLetterName;
};

int main()
{
    /*
    Making struct
    struct <struct name> <variable name> or struct <struct name> <variable name> = {...}
    */
    struct Person sid;

    // set struct members values.
    sid.age = 15;
    sid.firstLetterName = 'S';

    // to access member of a struct do struct.member
    printf("Age: %i First letter of first name: %c\n", sid.age, sid.firstLetterName);

    // also i can do this all when creating the person struct like
    struct Person rick = {56, 'R'};
    printf("Age: %i First letter of first name: %c\n", rick.age, rick.firstLetterName);

    return 0;
}