#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main() {
    FILE *fptr; // file ptr
    char BUFFER[100]; // set buffer size

    fptr = fopen("lyrics.txt", "r"); // open file
    while(fgets(BUFFER, sizeof(BUFFER), fptr)) // loop through file and read buffer size
    {  
        BUFFER[strcspn(BUFFER, "\n")] = 0; // remove the trailing \n at the end
        printf("%s - %lu\n", BUFFER, strlen(BUFFER)); // print line and 
        sleep(1); // wait a bit so i can see that its actualy working
    }

    fclose(fptr); // close file
    return 0;
}