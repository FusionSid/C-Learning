// Susinator ඞ

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>

void copyFile(int number);    // declare copy file function
void *doSusThings(void *arg); // Declare the sussy wussy ඞ

int main()
{
    // Seed for random
    srand(time(0));

    // Get thread count from user
    int thread_count;
    printf("Enter thread count: ");
    scanf("%i", &thread_count);

    // Create threads array
    pthread_t threads[thread_count];

    // Add new pthread_t's to threads array
    for (int i = 0; i < thread_count; i++)
    {
        pthread_t t;
        threads[i] = t;
    }

    // Loop through pthread_t's in threads array and start a thread
    for (int i = 0; i < (sizeof(threads) / sizeof(threads[0])); i++)
    {

        pthread_create(&threads[i], NULL, doSusThings, NULL);
        pthread_join(threads[i], NULL);
    }

    return 0;
}

// Do sus things function for threads
void *doSusThings(void *arg)
{
    // If you want it to be a while true loop, comment/delete these 2 lines and uncomment the while (1) line
    int images_per_thread = 5;
    for (int i = 0; i < images_per_thread; i++)
    // while (1)
    {
        // Generate random number for filename
        int number = rand() % 2000000000;
        // printf("\n%i", number);
        copyFile(number);
    }

    return NULL;
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