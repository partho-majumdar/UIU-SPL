#include <stdio.h>

void main()
{
    float value;

    printf("Enter any number: ");
    scanf("%f", &value);

    // a
    printf("Val: %20f\n", value);

    // b
    printf("Val: %f\n", value);

    // c
    printf("Val: %.2f\n", value);

    // d
    printf("Val: %.f\n", value);

    // e
    printf("Val: %e", value);
}