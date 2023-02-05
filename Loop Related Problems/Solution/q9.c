#include <stdio.h>

void main()
{
    float A, HW, CT, MT, TF;

    int n;

    printf("Enter number of student: ");
    scanf("%d", &n);

    int count = 1;

    while (n != 0)
    {
        printf("Enter attendance marks: ");
        scanf("%f", &A);

        printf("Enter assignments marks: ");
        scanf("%f", &HW);

        printf("Enter class tests marks: ");
        scanf("%f", &CT);

        printf("Enter midterm marks: ");
        scanf("%f", &MT);

        printf("Enter final marks: ");
        scanf("%f", &TF);

        float A_marks = (A * 5) / 5;
        float HW_marks = (HW * 10) / 10;
        float CT_marks = (CT * 15) / 15;
        float MT_marks = (MT * 30) / 50;
        float TF_marks = (TF * 40) / 100;

        float total_marks = A_marks + HW_marks + CT_marks + MT_marks + TF_marks;

        if (total_marks >= 90 && total_marks <= 100)
        {
            printf("Student %d : A\n", count);
        }

        else if (total_marks >= 86 && total_marks <= 89)
        {
            printf("Student %d : A-\n", count);
        }

        else if (total_marks >= 82 && total_marks <= 85)
        {
            printf("Student %d : B+\n", count);
        }

        else if (total_marks >= 78 && total_marks <= 81)
        {
            printf("Student %d : B\n", count);
        }

        else if (total_marks >= 74 && total_marks <= 77)
        {
            printf("Student %d : B-\n", count);
        }

        else if (total_marks >= 70 && total_marks <= 73)
        {
            printf("Student %d : C+\n", count);
        }

        else if (total_marks >= 66 && total_marks <= 69)
        {
            printf("Student %d : C\n", count);
        }

        else if (total_marks >= 62 && total_marks <= 65)
        {
            printf("Student %d : C-\n", count);
        }

        else if (total_marks >= 58 && total_marks <= 61)
        {
            printf("Student %d : D+\n", count);
        }

        else if (total_marks >= 55 && total_marks <= 57)
        {
            printf("Student %d : D\n", count);
        }

        else if (total_marks < 55)
        {
            printf("Student %d : F\n", count);
        }

        count++;
        n--;
    }
}
