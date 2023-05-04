#include <stdio.h>
#include <string.h>

typedef struct
{
    char make[20];
    char model[20];
    int year;
    float price;
} Car;

void search_by_model();
void sort_by_year();

void main()
{
    printf("1. Search for car by model.\n");
    printf("2. Sort them by year.\n");

    char ch;
    printf("Enter your choice: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case '1':
        search_by_model();
        break;

    case '2':
        sort_by_year();
        break;

    default:
        break;
    }
}

void search_by_model()
{
    Car cars[100];
    FILE *fp;
    char fileName[20];

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Error! File is not open");
    }

    int count = 0;

    while (!feof(fp))
    {
        fscanf(fp, "%[^,],", cars[count].make);
        fscanf(fp, "%[^,],", cars[count].model);
        fscanf(fp, "%d,", &cars[count].year);
        fscanf(fp, "%f\n", &cars[count].price);
        count++;
    }

    char carModel[20];

    fflush(stdin);
    printf("Enter car model: ");
    gets(carModel);

    printf("\nHere is search result: \n");

    for (int i = 0; i < count; i++)
    {
        if (strcmpi(cars[i].model, carModel) == 0)
        {
            printf("%d. %s ~ ", i + 1, cars[i].make);
            printf("%s ~ ", cars[i].model);
            printf("%d ~ ", cars[i].year);
            printf("%.2f\n", cars[i].price);
        }
    }

    fclose(fp);
}

void sort_by_year()
{
    Car cars[100], temp;

    FILE *fp;
    char fileName[20];

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Error! File is not open");
    }

    int count = 0;

    while (!feof(fp))
    {
        fscanf(fp, "%[^,],", cars[count].make);
        fscanf(fp, "%[^,],", cars[count].model);
        fscanf(fp, "%d,", &cars[count].year);
        fscanf(fp, "%f\n", &cars[count].price);
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count - i; j++)
        {
            if (cars[j - 1].year > cars[j].year)
            {
                temp = cars[j - 1];
                cars[j - 1] = cars[j];
                cars[j] = temp;
            }
        }
    }

    printf("\nAfter sorted by year: \n\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. ", i + 1);
        printf("%10s,\t", cars[i].make);
        printf("%10s,\t", cars[i].model);
        printf("%d,\t", cars[i].year);
        printf("%.2f\n", cars[i].price);
    }

    fclose(fp);
}