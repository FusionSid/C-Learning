#include <stdio.h>
#include <unistd.h> // Library for sleep function

// Sleep function in c

int main() {
    // This will print numbers from 1 - 100 with a 1 sec delay
    for (int i = 0; i < 100; i++) {
        printf("%i\n", i);
        // Sleep for 1 sec
        sleep(1);
    }
    return 0;
}