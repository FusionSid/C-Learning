#include <stdio.h>
 
typedef struct listnode {
    int value;
    struct listnode* next;
} lnode;

void printList(lnode head)
{
    lnode temp = head;
    while (1)
    {
        printf("%i\n", temp.value);
        temp = *temp.next;
        if (temp.next == NULL) {
            break;
        }
    }
}

int getByIndex(lnode head, int index)
{
    lnode temp = head;
    int count = 0;
    while (1)
    {
        count ++;
        if (index == count) {
            return temp.value;
        }
        temp = *temp.next;
        if (temp.next == NULL) {
            break;
        }
    }
    return -1;
}

int main() {
    lnode n1, n2, n3, n4, n5;
    
    // set node values
    n1.value = 69;
    n2.value = 42;
    n3.value = 420;
    n4.value = 69420;
    n5.value = 42690;

    // set next values
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    
    // Set head pointer
    lnode *head = &n1;
    printList(*head);
    printf("\n%i\n", getByIndex(*head, 5));

    return 0;
}
