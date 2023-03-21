#include <stdio.h>

void main()
{
    int x = 001, y = 010, z = 100;

    int i = --x + y++ - z-- - --z + ++y - --x + y-- - --x;

    // 0 + 10 - 100 - 98 + 12 - -1 + 12 - -2 

    printf("%d", i);
}