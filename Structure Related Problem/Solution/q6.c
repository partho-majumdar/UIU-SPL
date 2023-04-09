#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int id;
    float cgpa;
} Student;

void main()
{
    Student s1;

    printf("Enter name: ");
    gets(s1.name);

    printf("Enter ID: ");
    scanf("%d", &s1.id);

    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Name: %s\nID: %d\nCGPA: %.2f", s1.name, s1.id, s1.cgpa);
}