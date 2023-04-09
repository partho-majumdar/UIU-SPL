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

    strcpy(s1.name, "Jinku");
    s1.id = 2266;
    s1.cgpa = 3.91;

    printf("Name: %s\nID: %d\nCGPA: %.2f", s1.name, s1.id, s1.cgpa);
}