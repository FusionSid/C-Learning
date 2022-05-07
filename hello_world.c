/* 
gives tools to interact with the command line
std means standard and io stands for input and output
*/
#include <stdio.h> 

// unlike py, in c we need to put the code in a main function for it to run
int main() 
{
    /*
    This is how you print
    btw end="" instead of "\n" so i have to manually put that at the end
    */
    printf("Hello World\n"); 

    /* 
    Since the return type of the main method is int, i am returning an int. 
    I am returning 0 as the error code since nothing went wrong
    */
    return 0;
}

