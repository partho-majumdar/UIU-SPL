#include <stdio.h>

typedef struct
{
    char name[100];
    int id;
    float cgpa;
} student;

void better_cgpa(student *);

void main()
{
    student s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter name: ");
        gets(s[i].name);

        printf("Enter id: ");
        scanf("%d", &s[i].id);

        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);

        fflush(stdin);
    }

    better_cgpa(s);
}

void better_cgpa(student *s)
{
    float max = 0;
    int new_i;

    for (int i = 0; i < 2; i++)
    {
        if (s[i].cgpa > max)
        {
            max = s[i].cgpa;
            new_i = i;
        }
    }

    printf("%s\n", s[new_i].name);
    printf("%d\n", s[new_i].id);
    printf("%.1f\n", s[new_i].cgpa);
}
