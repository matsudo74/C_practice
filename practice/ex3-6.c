#include <stdio.h>

int main(void)
{
  int a, b, c, d, max;

  printf("4つの整数を入力してください。:");
  scanf("%d,%d,%d,%d", &a, &b, &c, &d);

  max = a;
  if (max < b)
    max = b;
  if (max < c)
    max = c;
  if (max < d)
    max = d;

  printf("最大値は%dです。\n", max);

  return (0);
}
