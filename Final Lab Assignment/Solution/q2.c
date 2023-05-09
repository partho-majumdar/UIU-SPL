#include <stdio.h>
#include <string.h>

void main()
{
    int arr[] = {11, 22, 33, 44, 22, 33, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumArr[size], p = 0;
    int sumOfTheNumber = 0;
    int sumOfEachSum = 0;
    int distinctArr[size], d = 0, distinctSum = 0;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        int indValue = arr[i];

        while (indValue)
        {
            int rem = indValue % 10;
            sum += rem;
            indValue /= 10;
        }

        sumArr[p++] = sum;
        sumOfTheNumber += arr[i];
        sumOfEachSum += sum;

        int flag = 0;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            distinctArr[d++] = arr[i];
        }
    }

    printf("Sum of the numbers: %d", sumOfTheNumber);

    printf("\nSum of digit for each number: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", sumArr[i]);
    }

    printf("\nTotal sum of digits of the numbers for the entire list: %d", sumOfEachSum);

    printf("\nAll distinct number from array: ");
    for (int i = 0; i < d; i++)
    {
        distinctSum += distinctArr[i];
        printf("%d, ", distinctArr[i]);
    }

    printf("\nSum of each distinct number all together: %d ", distinctSum);

    if (sumOfTheNumber > distinctSum)
    {
        printf("\nSum of the number is greater.");
    }

    else if (sumOfTheNumber < distinctSum)
    {
        printf("\nDistinct sum is greater");
    }
}