#include <stdio.h>

void main()
{
  int n;

  printf("Enter row number: ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      printf("%d ", col);
    }

    printf("\n");
  }
}

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/