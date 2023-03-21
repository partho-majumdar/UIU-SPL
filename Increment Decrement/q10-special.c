#include <stdio.h>

void main()
{
    int i = 0, j = 0;

    int ans = --i * i++ * ++j * j++;

    // -1 * -1 * 1 * 1

    printf("%d", ans);

    // why answer = 0? answer should be 1
}