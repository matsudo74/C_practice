#include <stdio.h>
int main(void)
{
  int x, y;
  int m;
  double a;

  printf("整数値を２つ入力せよ：");
  scanf("%d%d", &x, &y);

  m = x + y;
  a = (double)m / 2;

  printf("平均値は%fです。\n", a);
  return (0);
}
