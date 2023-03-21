#include <stdio.h>

void main()
{
    int i = 0;

    i = i++ - --i + ++i - i--;

    // 0 - 0 + 1 - 1 

    printf("%d", i);
}