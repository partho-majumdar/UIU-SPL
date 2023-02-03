#include <stdio.h>

void main()
{
    int val1, val2, val3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    int first = val1;
    int last = val3;

    printf("First value = %d, Last value = %d", first, last);
}