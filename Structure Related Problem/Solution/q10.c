#include <stdio.h>

typedef struct
{
    int id;
    int base;
    int height;
} triangle;

void main()
{
    triangle t[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter id: ");
        scanf("%d", &t[i].id);

        printf("Enter base: ");
        scanf("%d", &t[i].base);

        printf("Enter height: ");
        scanf("%d", &t[i].height);
    }

    for (int i = 0; i < 3; i++)
    {
        float area = (t[i].base * t[i].height) / 2;

        printf("\nArea of %d: %.2f", i + 1, area);
    }
}