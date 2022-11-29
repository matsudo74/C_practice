#include <stdio.h>

int main(void)
{
  int i;
  int sum = 0;

  for (i = 1; i <= 5; i++)
  {
    sum += i;
  }
  printf("1から5までの和は%d\n", sum);

  return (0);
}
