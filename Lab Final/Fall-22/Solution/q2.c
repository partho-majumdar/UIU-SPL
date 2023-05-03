#include <stdio.h>

void fiboSeries(int n, int a, int b)
{
    if (n == 0)
    {
        return;
    }

    else if (n == 1)
    {
        printf("%d", a);
    }

    else
    {
        printf("%d ", a);

        if (a % 2 == 0)
        {
            printf("$ ");
        }
        else if (a % 2 != 0)
        {
            printf("# ");
        }
        else if (a == 0)
        {
            printf("& ");
        }
    }

    fiboSeries(n - 1, b, a + b);
}

int main()
{
    int n, a = 0, b = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    fiboSeries(n, a, b);
    return 0;
}
