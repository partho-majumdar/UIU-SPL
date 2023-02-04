#include <stdio.h>
#include <math.h>

void main()
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0)
    {
        int ans = pow(x, y);
        printf("%d", ans);
    }

    else
    {
        printf("Enter valid input where x and y are positive integers");
    }
}