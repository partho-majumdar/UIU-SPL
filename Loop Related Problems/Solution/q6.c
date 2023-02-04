#include <stdio.h>

void main()
{
    int pick_number, guess_number, chances;

    printf("Player-1 picks a number: ");
    scanf("%d", &pick_number);

    printf("Enter total chance number: ");
    scanf("%d", &chances);

    while (chances != 0)
    {
        printf("Player-2 guess the number: ");
        scanf("%d", &guess_number);

        if (guess_number > pick_number)
        {
            printf("Wrong, %d chances left!\n", chances - 1);
        }

        else if (guess_number < pick_number)
        {
            printf("Wrong, %d chances left!\n", chances - 1);
        }

        else if (guess_number == pick_number)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }

        chances--;

        if (chances == 0)
        {
            printf("Player-1 wins!");
        }
    }
}