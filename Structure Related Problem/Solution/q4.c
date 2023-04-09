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
    Student s1 = {"Jinku", 2266, 3.87};

    printf("Name: %s\nID: %d\nCGPA: %.2f", s1.name, s1.id, s1.cgpa);
}