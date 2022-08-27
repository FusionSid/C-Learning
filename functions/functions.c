#include <stdio.h>

/*
A function that returns nothing or none (just like the amount of bitches i get) is void
This is above main so no define error eeee or do below for say hello:
param here i take in is name which is a char array / string
*/
void sayEAndHello(char name[])
{
    printf("E and Hello %s\n", name);
}

// declare func here so i can use it in main while keeping it under main
int area(int x, int y);

// So functions in c is shit we know like main and prinf
// Time to make my own ones
int main()
{
    // to call a func- BRO I KNOW THIS SHIT its like the same in every language
    // funcName(params...)
    sayEAndHello("FusionSid");
    int a = area(5, 4);
    printf("Area of rect 5x4 = %i\n", a);

    return 0;
}

int area(int x, int y)
{
    // return returns it
    return x * y;
}

/*
functions be like :moyai:
they also be like:
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/