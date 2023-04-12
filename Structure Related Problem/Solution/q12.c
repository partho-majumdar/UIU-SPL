#include <stdio.h>
#include <string.h>

typedef struct
{
    char p_name[100];
    char p_country[100];
    int runs[3];
    int wickets[3];
    int points[3];
} player;

void main()
{
    player p[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Player name: ");
        gets(p[i].p_name);

        printf("Player country: ");
        gets(p[i].p_country);

        for (int j = 0; j < 3; j++)
        {
            printf("Match %d run: ", j + 1);
            scanf("%d", &p[i].runs[j]);
        }

        for (int j = 0; j < 3; j++)
        {
            printf("Match %d wicket: ", j + 1);
            scanf("%d", &p[i].wickets[j]);
        }

        fflush(stdin);

        for (int k = 0; k < 3; k++)
        {
            int point = p[i].wickets[k] * 12;

            if (p[i].runs[k] <= 25)
            {
                point += 5;
            }

            else if (p[i].runs[k] > 25 && p[i].runs[k] <= 50)
            {
                point += 10;
            }

            else if (p[i].runs[k] > 50 && p[i].runs[k] <= 75)
            {
                point += 15;
            }

            else
            {
                point += 20;
            }

            p[i].points[k] = point;
        }
    }

    for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            printf("%s points: %d\n", p[m].p_name, p[m].points[n]);
        }
    }
}
