#include <stdio.h>

void main()
{
    int age1, age2, age3;

    printf("Enter first people age: ");
    scanf("%d", &age1);

    printf("Enter second people age: ");
    scanf("%d", &age2);

    printf("Enter third people age: ");
    scanf("%d", &age3);

    if (age1 > age2 && age1 > age3)
    {
        printf("First people is oldest");
    }

    else if (age2 > age1 && age2 > age3)
    {
        printf("Second people is oldest");
    }

    else
    {
        printf("Third people is oldest");
    }

    printf("\n");

    if (age1 < age2 && age1 < age3)
    {
        printf("First people is youngest");
    }

    else if (age2 < age1 && age2 < age3)
    {
        printf("Second people is youngest");
    }

    else
    {
        printf("Third people is youngest");
    }
}