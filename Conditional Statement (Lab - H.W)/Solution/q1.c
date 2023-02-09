#include <stdio.h>

void main()
{
    int input_value, id_last_2_digit;

    printf("Enter any number: ");
    scanf("%d", &input_value);

    printf("Enter your id's last 2 digit: ");
    scanf("%d", &id_last_2_digit);

    if (input_value % 2 == 0)
    {
        if (id_last_2_digit < input_value)
        {
            printf("Yes! input value is greater than your id's last 2 digit.");
        }

        else
        {
            printf("No! input value is not greater than your id's last 2 digit.");
        }
    }

    else
    {
        if (id_last_2_digit > input_value)
        {
            printf("Yes! input value is less than your id's last 2 digit.");
        }

        else
        {
            printf("No! input value is not less than your id's last 2 digit.");
        }
    }
}