#include <stdio.h>

int main(void)
{
  int num = 1;
  int sum = 0;

  do
  {
    sum = sum + num;
    num = num + 1;
  } while (num <= 5);

  printf("１から５までの和は%dです。\n", sum);

  return (0);
}
