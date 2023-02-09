#include <stdio.h>

void main()
{
    float temp;

    printf("Enter value in centigrade: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing weather");
    }

    else if (temp >= 0 && temp <= 10)
    {
        printf("Very cold weather");
    }

    else if (temp >= 10 && temp <= 20)
    {
        printf("Cold weather");
    }

    else if (temp >= 20 && temp <= 30)
    {
        printf("Normal in temp");
    }

    else if (temp >= 30 && temp <= 40)
    {
        printf("It's hot");
    }

    else
    {
        printf("Very hot");
    }
}