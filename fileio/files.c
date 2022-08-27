#include <stdio.h>

/* Creating / Writing to files: */

int main()
{
    // To work with files i must declare a pointer of type FILE
    FILE *fptr;

    /*
    Opening file
    fopen(filename, mode)
    modes: r, rb, w, wb, a, ab, r+, rb+, w+, wb+, a+, ab+
    */

    // Since this file doesnt exist and im in write mode it will create it
    fptr = fopen("./hello_world.txt", "w");
    fclose(fptr); // remember to close file

    // For reading and writing use functions fprintf() and fscanf()
    FILE *non_existing_file;

    non_existing_file = fopen("./lyriscs.txt", "r");
    if (non_existing_file == NULL) // this will check if the file doesn't exist
    {
        printf("Error!\n"); // and since lyriscs.txt doesn't exist it will run this
        // return 1; this line is commented out so i can continue the code
    }
    fclose(non_existing_file);

    // Lets read this file
    FILE *nggyuLyrics;

    nggyuLyrics = fopen("./lyrics.txt", "r");

    // read it and print char by char
    // theres also fscanf but i not big brain enough to get that to do more than a word
    char ch;
    do
    {
        ch = fgetc(nggyuLyrics);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(nggyuLyrics);

    // Writing
    int num; // im going to write the number inputed to num.txt

    FILE *number_file;

    number_file = fopen("num.txt", "w");
    printf("\nEnter num: ");
    scanf("%d", &num);

    fprintf(number_file, "%d", num);
    fclose(number_file);

    return 0;
}