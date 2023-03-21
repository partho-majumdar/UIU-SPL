#include <stdio.h>

void main()
{
    double d = 1.5, D = 2.5;

    int ans = d++ + ++D;

    // 1.5 + 3.5

    printf("%d", ans);
}