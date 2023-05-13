#include <stdio.h>
#include <string.h>

typedef struct
{
    char number[20];
    char sim_code[5];
} PhoneNumber;

void main()
{
    PhoneNumber phone[100];
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

    int banglalink = 0;
    int airtel = 0;
    int grameenphone = 0;
    int robi = 0;

    while (fscanf(fp, "%s", phone[count].number) == 1)
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        int length = strlen(phone[i].number);

        if (length == 11)
        {
            printf("Valid Number: %s\n", phone[i].number);
        }

        else if (length != 11)
        {
            printf("Invalid Number ~ %s\n", phone[i].number);

            strncpy(phone[i].sim_code, phone[i].number, 3);
            phone[i].sim_code[3] = '\0';

            if (strcmp(phone[i].sim_code, "019") == 0)
            {
                banglalink++;
            }

            else if (strcmp(phone[i].sim_code, "016") == 0)
            {
                airtel++;
            }

            else if (strcmp(phone[i].sim_code, "017") == 0)
            {
                grameenphone++;
            }

            else if (strcmp(phone[i].sim_code, "018") == 0)
            {
                robi++;
            }
        }
    }

    int max = 0;
    char *companyName;

    if (banglalink > max)
    {
        max = banglalink;
        companyName = "019-Banglalink";
    }

    if (grameenphone > max)
    {
        max = grameenphone;
        companyName = "017-grameenphone";
    }

    if (airtel > max)
    {
        max = airtel;
        companyName = "016-Airtel";
    }

    if (robi > max)
    {
        max = robi;
        companyName = "018-Robi";
    }

    printf("The most incorrect format is: %s and it occur %d times.", companyName, max);

    fclose(fp);
}