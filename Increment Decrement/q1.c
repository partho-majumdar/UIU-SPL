#include <stdio.h>

void main()
{
    int i = 11;

    i = i++ + ++i;

    // i = 11 (--> i = 12) + 13 = 24

    printf("%d", i);
}