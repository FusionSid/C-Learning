#include <stdio.h>

/*
Enums
enums are constant and are a user defined type of integer identifiers
this is to help make a program more readable
*/

// Here i make a enum for everyday of the week
// By default it will be like a list where Mon=0, Tue=1 etc
// But i can put = <number> To define it myself
enum Day
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{

    // Using it, Here i make a variable called today. This is treated as an integer
    // Since i put the value of Sun the value will be 7
    enum Day today = Sun;
    printf("Today = %i\n", today); // should print 7


    return 0;
}