#include <stdio.h>
#include <stdbool.h>

void main()
{
    int i = 1, j = 2, k = 3;

    int m = i-- - j-- - k--;

    // 1 - 2 - 3

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);

    printf("%d", m);
}