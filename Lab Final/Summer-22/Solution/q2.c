#include <stdio.h>

int convBase6(int);
int primeCheck(int *, int *);
int isPrime(int, int);

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int last = n % 10;

    int sum = 0, temp = n;
    while (temp)
    {
        int rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }

    int first = sum % 10;
    int sum_of_first_and_last = first + last;

    int convert_digit_sum = convBase6(n);
    int zero = 0;
    int primeValue = primeCheck(&zero, &sum_of_first_and_last);

    if (convert_digit_sum % 5 == 0 || primeValue > 4)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
}

int primeCheck(int *a, int *b)
{
    int count = 0;
    for (int i = *a; i < *b; i++)
    {
        if (isPrime(i, 2))
        {
            count++;
        }
    }

    return count;
}

int isPrime(int n, int init)
{
    if (n == init)
    {
        return 1;
    }

    else if (n % init == 0 || n == 1)
    {
        return 0;
    }

    else
    {
        isPrime(n, init + 1);
    }
}

int convBase6(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else
    {
        return (num % 6) + 10 * convBase6(num / 6);
    }
}

/*
--------- without pointer ----------

#include <stdio.h>

int convBase6(int);
int primeCheck(int, int);
int isPrime(int);

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int last = n % 10;

    int sum = 0, temp = n;
    while (temp)
    {
        int rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }

    int first = sum % 10;
    int sum_of_first_and_last = first + last;

    int convert_digit_sum = convBase6(n);
    int primeValue = primeCheck(0, sum_of_first_and_last);

    if (convert_digit_sum % 5 == 0 || primeValue > 4)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
}

int primeCheck(int a, int b)
{
    int count = 0;
    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int isPrime(int n)
{
    int flag = 1;

    if (n == 0 || n == 1)
    {
        return 0;
    }

    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
}

int convBase6(int num)
{
    int val[100], i = 0;

    while (num)
    {
        val[i] = num % 6;
        num = num / 6;
        i++;
    }

    int sum = 0;
    for (int k = i - 1; k >= 0; k--)
    {
        sum += val[k];
    }

    return sum;
}

*/