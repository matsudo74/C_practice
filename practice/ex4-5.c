#include <stdio.h>

int main(void)
{
  int a, b;
  int sum;

  printf("２つの整数を入力してください。：");
  scanf("%d %d", &a, &b);

  if (a > b)
  {
    printf("%dから%dまでの和は", b, a);
    do
    {
      b = b + 1;
      sum = a + b;
    } while (a == b);
    printf("%dです。\n", sum);
  }
  else
  {
    printf("%dから%dまでの和は", a, b);
    do
    {
      a = a + 1;
      sum = a + b;
    } while (a == b);
    printf("%dです。\n", sum);
  }

  return (0);
}
