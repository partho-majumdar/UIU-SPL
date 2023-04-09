#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int num = str[i] - '0';

            int flag = 1;

            if (num == 0 || num == 1)
            {
                flag = 0;
            }

            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                count++;
            }
        }
    }
    printf("%d ", count);
}