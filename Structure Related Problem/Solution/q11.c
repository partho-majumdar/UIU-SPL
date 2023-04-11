#include <stdio.h>

typedef struct
{
    int id;
    int base;
    int height;
} triangle;

void find_max_triangle(triangle *);

void main()
{
    triangle t[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter id: ");
        scanf("%d", &t[i].id);

        printf("Enter base: ");
        scanf("%d", &t[i].base);

        printf("Enter height: ");
        scanf("%d", &t[i].height);
    }

    find_max_triangle(t);
}

void find_max_triangle(triangle *new_t)
{
    float init_area = 0;
    int new_i;

    for (int i = 0; i < 3; i++)
    {
        float area = (new_t[i].base) * (new_t[i].height) / 2;

        if (area > init_area)
        {
            init_area = area;
            new_i = i;
        }
    }

    printf("Area of %d = %.2f", new_t[new_i].id, init_area);
}