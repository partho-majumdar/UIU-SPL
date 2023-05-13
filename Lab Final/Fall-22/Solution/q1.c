#include <stdio.h>

void main()
{
    int first;
    int last;

    printf("Enter two value: ");
    scanf("%d %d", &first, &last);

    for (int i = first; i <= last; i++)
    {
        if (DemogorgonNumber(i))
        {
            printf("%d ", i);
        }
    }
}

int DemogorgonNumber(int a)
{
    if ((checkFunc1(a)) && (primeChecker(a)))
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int checkFunc1(int a)
{
    int oddSum = 0, evenSum = 0;

    while (a)
    {
        int rem = a % 10;

        if (rem % 2 == 0)
        {
            evenSum += rem;
        }

        else
        {
            oddSum += rem;
        }

        a /= 10;
    }

    if (oddSum < evenSum)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int primeChecker(int a)
{
    int flag = 1;

    if (a == 0 || a == 1)
    {
        return 0;
    }

    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
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