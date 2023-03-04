#include <stdio.h>

int main(void)
{
  int a, b, i, j;

  printf("  *|");
  for (a = 0; a <= 12; a++)
  {
    printf("%3d", a);
  }
  printf("\n");

  for (b = 1; b < 44; b++)
  {
    printf("-");
  }
  printf("\n");

  for (i = 0; i <= 12; i++)
  {
    printf("%3d|", i);
    for (j = 0; j <= 12; j++)
    {
      printf("%3d", (i * j) % 13);
    }
    printf("\n");
  }
}
