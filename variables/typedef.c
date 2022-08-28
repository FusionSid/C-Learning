#include <stdio.h>

// Type def keyword is for giving an exisiting datatype a nickname
// This is usefuls for things like structs

typedef char name[16]; // So now name is a char array of 16 bytes

typedef struct {
    name firstname; // im using a nother typedef thing here
    int age;
} User; // This is a struct which has been nicknamed to user

int main() {
    // name used here:
    name sid = "Siddhesh";
    printf("Name: %s\n", sid);
    
    // I use the struct here:
    User fusionsid = {"Siddhesh", 15};
    printf("User: %s, %i\n", fusionsid.firstname, fusionsid.age);

    return 0;
}