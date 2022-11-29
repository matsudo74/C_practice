#include <stdio.h>
#include <math.h>

int main(void)
{
  int i;
  double result;

  printf("　x　　　　sqrt(x)\n");

  for (i = 0; i <= 10; i++)
  {
    result = sqrt((double)i);
    printf("%2d,　%.15f\n", i, result);
  }

  return (0);
}
