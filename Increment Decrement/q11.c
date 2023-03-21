#include <stdio.h>

void main()
{
    char c = 'A', C = 'a';

    int ans = c++ * ++C;

    // 65 * 98

    printf("%d", ans);
}