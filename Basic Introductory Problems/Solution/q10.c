#include <stdio.h>

void main()
{
    long int value1;
    value1 = 2147483647;

    long long int value2;
    value2 = 9223372036854775807;

    long double value3;
    value3 = 1.1;

    short int value4;
    value4 = 32767;

    printf("The long int value: %ld\n", value1);
    printf("The long long int value: %lld\n", value2);
    printf("The long double value: %.1Lf+E4932\n", value3);
    printf("The short int value: %hd", value4);
}