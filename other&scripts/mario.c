#include <stdio.h>

// Probably enifcient af

int main() {
    int height;
    printf("Enter height: ");
    scanf("%i", &height);

    for (int i = 0; i < height+1; i++)
    {
        for (int j = 0; j < height-i; j++) 
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}