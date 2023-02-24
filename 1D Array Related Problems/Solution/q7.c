#include <stdio.h>

void main()
{
    int n;
    char arr[100];

    printf("Enter how many alphabets you want to take as input: ");
    scanf("%d", &n);

    // take input
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    // print
    int count = 0;

    for (int j = 0; j < n; j++)
    {
        char upper_case = toupper(arr[j]);

        if (upper_case == 'A' || upper_case == 'E' || upper_case == 'I' || upper_case == 'O' || upper_case == 'U')
        {
            count++;
        }
    }

    printf("Count: %d", count);
}