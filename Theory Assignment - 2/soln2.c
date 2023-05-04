#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll_no;
    char name[50];
    int age;
    float marks;
};

void print_names_same_marks(struct student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (students[i].marks == students[j].marks)
            {
                printf("%s\n", students[i].name);
                printf("%s\n", students[j].name);
            }
        }
    }
}

void print_names_even_roll_no(struct student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].roll_no % 2 == 0)
        {
            printf("%s\n", students[i].name);
        }
    }
}

void display_roll_no_with_age_limit(struct student students[], int size)
{
    int roll_no;
    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < size; i++)
    {
        if (students[i].roll_no == roll_no)
        {
            if (students[i].age < 10 || students[i].age > 15)
            {
                printf("%d\n", students[i].roll_no);
            }
        }
    }
}

int main()
{
    struct student students[5] = {
        {1, "PP", 12, 80},
        {2, "NN", 13, 75},
        {3, "TT", 14, 80},
        {4, "KK", 15, 85},
        {5, "MM", 8, 70}};

    printf("Names with same marks:\n");
    print_names_same_marks(students, 5);

    printf("\nNames with even roll numbers:\n");
    print_names_even_roll_no(students, 5);

    printf("\nRoll no. with age less than 10 or more than 15:\n");
    display_roll_no_with_age_limit(students, 5);

    return 0;
}
