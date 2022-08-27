#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>

void copyFile(int number);

void *doSusThings(void *arg)
{
    // for (int i = 0; i < 10; i++)
    while (1)
    {
        // Generate random number for filename
        int number = rand() % 2000000000;
        printf("\n%i", number);
        copyFile(number);
    }

    return NULL;
}

int main()
{
    // shitty single thread way
    // int i = 0;
    // while (1) {
    //     copyFile(i);
    //     printf("%i", i);
    //     i++;
    // }

    srand(time(0));

    // Create threads
    pthread_t t1, t2, t3, t4, t5;

    pthread_create(&t1, NULL, doSusThings, NULL);
    pthread_create(&t2, NULL, doSusThings, NULL);
    pthread_create(&t3, NULL, doSusThings, NULL);
    pthread_create(&t4, NULL, doSusThings, NULL);
    pthread_create(&t5, NULL, doSusThings, NULL);

    // Join threads
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);
    pthread_join(t5, NULL);

    return 0;
}

// Copy file
void copyFile(int number)
{
    char filename[69];
    sprintf(filename, "./sus/sus%i.png", number);

    FILE *originalSus, *SussyWussyCopy;

    char c;
    originalSus = fopen("sus.png", "rb");

    fseek(originalSus, 0, SEEK_END);
    int length = ftell(originalSus);
    fseek(originalSus, 0, SEEK_SET);
    SussyWussyCopy = fopen(filename, "wb");
    for (int i = 0; i < length; i++)
    {
        fputc(fgetc(originalSus), SussyWussyCopy);
    }
    fclose(originalSus);
    fclose(SussyWussyCopy);
}