#include <stdio.h>

void main()
{
    int a = 11, b = 22, c;

    c = a + b + a++ + b++ + ++a + ++b;

    // 11 + 22 + 11 + 22 + 13 + 24

    printf("%d", c);
}