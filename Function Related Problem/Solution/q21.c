#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcMean(int *, int);
float calc_std_deviation(int *, int);

void main()
{
    int n;
    printf("Enter number of element in array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", arr + i);
    }

    float ans = calc_std_deviation(arr, n);
    printf("%.2f", ans);
}

int calcMean(int *arr, int num_of_element)
{
    int sum = 0;
    for (int i = 0; i < num_of_element; i++)
    {
        sum += *(arr + i);
    }

    int mean = sum / num_of_element;

    return mean;
}

float calc_std_deviation(int *arr, int num_of_element)
{
    int mean = calcMean(arr, num_of_element);

    float sum_of_x_mean = 0.0;

    for (int i = 0; i < num_of_element; i++)
    {
        sum_of_x_mean += pow((*(arr + i) - mean), 2);
    }

    float calc_deviation = sqrt(sum_of_x_mean / num_of_element);

    return calc_deviation;
}