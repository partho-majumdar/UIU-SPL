#include <stdio.h>

void main()
{
    int n, search_num;
    int arr[100], found[100];

    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number that you looking for: ");
    scanf("%d", &search_num);

    int count = 0;

    // print
    printf("Found at index position: ");
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == search_num)
        {
            printf("%d, ", j);
            count++;
        }
    }

    if (count == 0)
    {
        printf("NOT FOUND");
    }
}