#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    char id[100];
    float cgpa;
} Student;

void main()
{
    Student s1;

    strcpy(s1.name, "Jinku");
    strcpy(s1.name, "011222266");
    s1.cgpa = 3.8;
}