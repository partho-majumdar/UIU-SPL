#include <stdio.h>

void main()
{
    int m = 0, n = 0;

    int p = --m * --n * n-- * m--;

    // -1 * -1 * -1 * -1

    printf("%d", p);
}