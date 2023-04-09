/// Any number conversion to any number
#include <stdio.h>
#include <math.h>

int main()
{
    int S, D, Num;
    scanf("%d %d %d", &S, &Num, &D);

    /// source(s) -> Decimal
    int deci = 0, i = 0, j;
    while (Num)
    {
        deci += Num % 10 * pow(S, i);
        i++;
        Num /= 10;
    }

    /// Decimal -> destination(D)
    int des[100];
    i = 0;
    while (deci)
    {
        des[i] = deci % D;
        deci = deci / D;
        i++;
    }
    
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", des[j]);
    }
}
