#include <stdio.h>

void main()
{
    unsigned int val1;
    val1 = 4294967295;

    unsigned long int val2;
    val2 = 4294967295;

    unsigned long long int val3;
    val3 = 18446744073709551615;

    unsigned short int val4;
    val4 = 65535;

    printf("The unsigned int value: %u\n", val1);
    printf("The unsigned long int value: %lu\n", val2);
    printf("The unsigned long long int value: %llu\n", val3);
    printf("The short int value: %u", val4);
}