#include <stdio.h>
#include <string.h> // import for strcpy

/*
Structs with strings
string and arrays in c be little bit fucky wucky
so for strings we gotta use strcpy
*/

struct Person
{
    int age;
    char firstName[30];
    char lastName[30];
};

int main()
{
    struct Person sid;

    // Assign a value to the string using the strcpy function
    strcpy(sid.firstName, "Siddhesh");
    strcpy(sid.lastName, "Zantye");

    sid.age = 15;

    // Print the value
    printf("My name is %s %s and I am %i years old\n", sid.firstName, sid.lastName, sid.age);

    return 0;
}