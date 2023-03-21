#include <stdio.h>

void main()
{
    int a = 5, b = 5, c = 5;

    int ans1 = a + (++a) + a; // 18

    int ans2 = b + b + (++b); // 16

    int ans3 = (++c) + c + c; // 18

    printf("%d ", ans1);
    printf("%d ", ans2);
    printf("%d ", ans3);
}