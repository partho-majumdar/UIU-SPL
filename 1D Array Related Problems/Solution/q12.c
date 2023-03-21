#include <stdio.h>
#include <stdbool.h>

void main()
{
    int arr[100];
    int n;

    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    printf("Enter your array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // apply bubble sort
    bool swapped;

    for (int i = 0; i < n; i++)
    {
        swapped = false;

        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    // print value
    printf("\nHere is sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*

Bubble sort --> sorting algorithm that sort the array step by step

Swapped --> array is already sorted so first pass er por break marbe "time complexity" valo hobe

first pass a e jodi kono value swap na hoy it means array is already sorted no need to check 2nd 3rd.... pass

*/