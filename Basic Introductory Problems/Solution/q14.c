#include <stdio.h>

int global1 = 10;

void main()
{
    // a
    printf("A. Global: %d\n", global1);

    {
        int local1 = 20;

        // b
        printf("B. Local: %d\n", local1);
    }

    {
        // c
        extern int global1;
        printf("C. Global: %d", global1);
    }
}