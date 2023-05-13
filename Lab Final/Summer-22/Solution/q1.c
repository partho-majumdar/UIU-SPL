#include <stdio.h>

typedef struct
{
    char name[50];
    int id;
    float cgpa;
} Student;

void main()
{
    Student students[100];
    int n;
    printf("Enter number of student: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(students[i].name);

        printf("Enter id: ");
        scanf("%d", &students[i].id);

        printf("Enter cgpa: ");
        scanf("%.2f", &students[i].cgpa);
    }

    float h_cg = 0.0;
    int h_cg_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (students[i].cgpa > h_cg)
        {
            h_cg = students[i].cgpa;
            h_cg_index = i;
        }
    }

    puts(students[h_cg_index].name);
    printf("%d\n", students[h_cg_index].id);
    printf("%f", students[h_cg_index].cgpa);
}