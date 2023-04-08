#include <stdio.h>

void GetNthPrime(int);
int is_prime(int);

void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    GetNthPrime(n);
}

void GetNthPrime(int n)
{
    int count = 0, num = 2;

    while (count < n)
    {
        if (is_prime(num))
        {
            count++;
        }
        num++;
    }
    printf("The %dth prime number is %d\n", n, num - 1);
}

int is_prime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }

    else
    {
        int flag = 1;
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