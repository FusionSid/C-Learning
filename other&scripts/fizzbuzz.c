#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (!(i % 15))
        {
            printf("Fizz Buzz\n");
        }
        else if (!(i % 5))
        {
            printf("Buzz\n");
        }
        else if (!(i % 3))
        {
            printf("Fizz\n");
        }
        else
        {
            printf("%i\n", i);
        }
    }
    return 0;
}