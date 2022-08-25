#include <stdio.h>

// arrays

int main() {
    /* 
    arrays are fixed length 
    making array: <type> <name>[<length>] or <type> <name>[] = {...}
    */

    int numbers[] = {1, 6, 2, 9, 2};
    
    int numbers2[3];
    // to access index from array do <arrayName>[index]
    
    // Remember sid you dumb fuck INDEX START FROM 0 YOU BETTER NOT FORGET
    numbers2[0] = 4;
    numbers2[1] = 2;
    numbers2[2] = 0;

    // Print values from array
    
    // Get length of array
    size_t n = sizeof(numbers2) / sizeof(int);

    // Loop thru and print
    for (int i = 0; i < n; i++) {
        printf("Value at numbers2[%i] is: %i\n", i, numbers2[i]);
    }

    return 0;
}