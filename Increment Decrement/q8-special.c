#include <stdio.h>

void main()
{
    int a = 1;

    a = a++ + ++a * --a - a--;

    // 1 + 3 * 2 - 2

    printf("%d", a);

    // why answer 3? answer should be 5
}