#include <stdio.h>

void main()
{
    int i = 19, j = 29, k;

    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    // i =18, j = 28
    // 19 - 18 + 28 - 29 + 18 - 29 + 19 - 28

    printf("%d", k);
}