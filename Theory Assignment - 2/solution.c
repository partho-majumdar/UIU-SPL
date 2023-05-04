#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[50];
    int age;
    float marks;
} Students;

void print_name_same_mark(Students[], int);
void print_name_even_roll(Students[], int);
void print_roll_by_age(Students[], int);

void main()
{
    int n = 5;
    Students s[5] = {
        {1, "AA", 7, 60},
        {2, "BB", 11, 79},
        {3, "CC", 13, 60},
        {4, "DD", 15, 85},
        {5, "EE", 19, 70},

    };

    printf("Name of all the students having same marks: \n");
    print_name_same_mark(s, n);

    printf("\nName of all the students having even roll: \n");
    print_name_even_roll(s, n);

    printf("\nRoll no. of the students whose age is more than 15 or less than 10: ");
    print_roll_by_age(s, n);
}

void print_name_same_mark(Students s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].marks == s[j].marks)
            {
                printf("%s\n", s[i].name);
                printf("%s\n", s[j].name);
            }
        }
    }
}

void print_name_even_roll(Students s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll_no % 2 == 0)
        {
            printf("%s\n", s[i].name);
        }
    }
}

void print_roll_by_age(Students s[], int n)
{
    int rollNo;
    printf("\nEnter roll number: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll_no == rollNo)
        {
            if (s[i].age < 10 || s[i].age > 15)
            {
                printf("Roll No: %d\n", s[i].roll_no);
            }
        }
    }
}
