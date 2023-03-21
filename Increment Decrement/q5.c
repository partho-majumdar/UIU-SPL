#include <stdio.h>

void main()
{
    int a = 1, b = 2;

    int c = --b - ++a + ++b - --a;

    // 1 - 2 + 2 - 1

    printf("%d", c);
}