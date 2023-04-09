#include <stdio.h>

typedef struct
{
    char name[100];
    int id;
    float cgpa;
} student;

void main()
{
    student std[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter name: ");
        gets(std[i].name);

        printf("Enter ID: ");
        scanf("%d", &std[i].id);

        printf("Enter cgpa: ");
        scanf("%f", &std[i].cgpa);

        fflush(stdin);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nName: ");
        puts(std[i].name);

        printf("ID: %d\n", std[i].id);

        printf("CGPA: %f\n", std[i].cgpa);
    }
}