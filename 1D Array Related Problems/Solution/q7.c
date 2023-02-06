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
        if (arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U' || arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u')
        {
            count++;
        }
    }

    printf("Count: %d", count);
}