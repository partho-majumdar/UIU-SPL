#include <stdio.h>

int isPrime(int);

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int num = isPrime(n);

    if (num)
    {
        printf("Prime");
    }

    else
    {
        printf("Not Prime");
    }
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