#include <stdio.h>
#include <math.h>

// Function to check if a number is a Vecna number
int isVecna(int num)
{
    int firstDigit = num;
    int lastDigit = num % 10;

    // Get the first digit of the number
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    // Check if number starts and ends with 1
    if (firstDigit != 1 || lastDigit != 1)
    {
        return 0;
    }

    // Check if number is not a palindrome
    int reverse = 0, temp = num;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    if (reverse == num)
    {
        return 0;
    }

    return 1;
}

// Function to compute the sum of the digits of a number
int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if the square of the sum of digits is divisible by 8
int isDivisibleBy8(int num)
{
    int sum = sumDigits(num);
    int squareSum = sum * sum;
    return (squareSum % 8 == 0);
}

int main()
{
    int lower, upper;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Vecna numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++)
    {
        if (isVecna(i) && isDivisibleBy8(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

// -------------- Using String ------------

/*

#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to check if a number is a Vecna number
int isVecna(int num)
{
    // Convert number to string for easier digit manipulation
    char str[20];
    sprintf(str, "%d", num);

    // Check if number starts and ends with 1
    if (str[0] != '1' || str[strlen(str) - 1] != '1')
    {
        return 0;
    }

    // Check if number is not a palindrome
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            return 1;
        }
    }
    return 0;
}

// Function to compute the sum of the digits of a number
int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if the square of the sum of digits is divisible by 8
int isDivisibleBy8(int num)
{
    int sum = sumDigits(num);
    int squareSum = sum * sum;
    return (squareSum % 8 == 0);
}

int main()
{
    int lower, upper;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Vecna numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++)
    {
        if (isVecna(i) && isDivisibleBy8(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

*/