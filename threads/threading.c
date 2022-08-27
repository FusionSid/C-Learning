#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Basic threading in c

// Function that runs in thread 1
void *myThread1Function(void *arg)
{
    while (1)
    {
        sleep(1);
        printf("Hey from thread 1!!!\n");
    }

    return NULL;
}

// Function that runs in thread 2
void *myThread2Function(void *arg)
{
    while (1)
    {
        sleep(1);
        printf("Hey from thread 2!!!\n");
    }

    return NULL;
}

int main()
{
    // Make 2 new thread
    pthread_t myThread1, myThread2;

    // Create threads, must put reference to thread var and thread function
    // first nulls idk wtf it is for, im to lazy to check docs or google but second should be for the arg val
    pthread_create(&myThread1, NULL, myThread1Function, NULL);
    pthread_create(&myThread2, NULL, myThread2Function, NULL);

    // Join threads
    pthread_join(myThread1, NULL);
    pthread_join(myThread2, NULL);

    return 0;
}