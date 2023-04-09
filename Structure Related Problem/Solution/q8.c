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

    int new_id;
    int new_cg = 0;

    for (int i = 0; i < 2; i++)
    {
        if (std[i].cgpa > std[new_cg].cgpa)
        {
            new_cg = i;
        }
    }

    printf("\nName: %s\n", std[new_cg].name);

    printf("ID: %d\n", std[new_cg].id);

    printf("CGPA: %f\n", std[new_cg].cgpa);
}