#include <stdio.h>
#include <string.h>

// the size of the value
#define table_size 69420

// Hashing function 
int hash(char *keyname);

typedef struct table_entry {
    char *key;
    char *value;
    struct table_entry *next;
} table_entry;



int main() {
    printf("%i", hash("eeeefe"));
    return 0;
}

int hash(char *keyname) {
    int index = 0;
    for (int i = 0; i < strlen(keyname); ++i) {
        index += keyname[i];
        index = index * 69 + keyname[i];
    }
    index = index % table_size;

    return index;
}
